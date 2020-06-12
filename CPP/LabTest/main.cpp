#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int totalBanks = 5;

struct Bank {
    char owner;
    double balance;
    char borrower1;
    double loan1;
    char borrower2;
    double loan2;
};

void readBankRec(Bank [totalBanks]);
double detBankruptcy(Bank [totalBanks], int);

int main()
{
    double minAsset, totalAssets;
    Bank bankRec[totalBanks];
    char *ptrOwner;

    cout << "Enter min asset limit (RM million) : ";
    cin >> minAsset;
    
    readBankRec(bankRec);

    for (int i = 0; i < totalBanks; ++i) {
        totalAssets = detBankruptcy(bankRec, i);
        ptrOwner = &bankRec[i].owner;
        
        cout << "Bank " << *ptrOwner << " is ";
        cout << (totalAssets < minAsset ? "BANKRUPT" : "in SAFE status"); 
        cout << " [RM " << totalAssets << " million]" << endl;
    }

    return 0;
}

void readBankRec(Bank bankRec[totalBanks]) {
    string filename;
    cout << "\nPlease enter the filename you wish to open: ";
    cin >> filename;
    cout << endl;
    
    ifstream readFile(filename.c_str());
    if (readFile.good()) {
        for (int i = 0; i < totalBanks; ++i) {
            readFile >> bankRec[i].owner >> bankRec[i].balance
                     >> bankRec[i].borrower1 >> bankRec[i].loan1
                     >> bankRec[i].borrower2 >> bankRec[i].loan2;
        }
    }
    readFile.close();
}

double detBankruptcy(Bank bankRec[totalBanks], int i) {
    double totalAssets;
    totalAssets = bankRec[i].balance + bankRec[i].loan1 + bankRec[i].loan2;
    return totalAssets;
}
