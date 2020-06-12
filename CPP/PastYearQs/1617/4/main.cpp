#include <iostream>
#include <cstring>
using namespace std;

#define SIZE 4

int main()
{
    char humanDNA_ori[] = "CGTCCATAGCCACG";
    char humanDNA_trans[SIZE];
    int nums[SIZE];

    strcpy(humanDNA_trans, humanDNA_ori);

    for (int i = 0; i < SIZE+2; ++i) {
        cin >> nums[i];
        // cout << nums[i] << ' ';
        // humanDNA_trans[SIZE-i-1] = humanDNA_ori[i-1];
    }
    for (int i = 0; i < SIZE+2; ++i) {
        // cin >> nums[i];
        cout << nums[i] << ' ';
        // humanDNA_trans[SIZE-i-1] = humanDNA_ori[i-1];
    }


    // cout << humanDNA_ori << endl;
    // cout << humanDNA_trans << endl;

    return 0;
}