#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

const int SIZE = 6;

struct Brands {
    string brand;
    string type;
};

int getRandNo(int, string *, Brands *, string);
void showQuestion(Brands *);
bool showAnswer(Brands *, int);
bool getAnswer(string *, Brands *, int);

int main()
{
    srand(time(NULL));
    Brands items[SIZE] = {{"Adidas", "Shoe"}, {"Puma", "Shoe"},
                          {"Proton", "Vehicle"}, {"Starbuck", "Food"},
                          {"Bear", "Toy"}, {"Padini", "Shirt"}};

    showQuestion(items);

    return 0;
}

int getRandNo(int max, string *gen, Brands *items, string cprBy) {
    // Set flag
    bool cprBrand = false,
         cprType = false;
    if (cprBy.compare("BRAND") == 0) cprBrand = true;
    else if (cprBy.compare("TYPE") == 0) cprType = true;
    // Start generate random number
    int randNo;
    bool isUnique;
    do {
        isUnique = true;
        randNo = rand() % max + 0;
        for (int i = 0; i < SIZE; ++i) {
            if (cprBrand && items[randNo].brand.compare(gen[i]) == 0) {
                isUnique = false;
                break;
            } else if (cprType && items[randNo].type.compare(gen[i]) == 0) {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
            return randNo;
    } while (true);
}


void showQuestion(Brands *items) {
    bool isCorrectAnswer;
    string genQuestions[SIZE];
    int randNo;
    for (int i = 0; i < SIZE; ++i) {
        randNo = getRandNo(SIZE, genQuestions, items, "BRAND");
        cout << endl << i + 1 << ") Brand "
             << items[randNo].brand
             << endl;
        genQuestions[i] = items[randNo].brand;
        isCorrectAnswer = showAnswer(items, randNo);
        if (!isCorrectAnswer)
            break;
    }
}

bool showAnswer(Brands *items, int currQues) {
    string genAnswers[4];
    int randAns, randAnsPos;
    randAnsPos = getRandNo(4, genAnswers, items, "TYPE");
    for (int i = 0; i < 4; ++i) {
        if (i != randAnsPos) {
            do {
                randAns = getRandNo(SIZE, genAnswers, items, "TYPE");
            } while (randAns == currQues);
        } else {
            randAns = currQues;
        }
        if (i == 0) cout << "A) ";
        else if (i == 1) cout << "B) ";
        else if (i == 2) cout << "C) ";
        else if (i == 3) cout << "D) ";
        cout << items[randAns].type << endl;
        genAnswers[i] = items[randAns].type;
    }
    // Before proceed to next question, ask the answer from user
    // and return true or false for their answer
    return getAnswer(genAnswers, items, currQues);
}

bool getAnswer(string *ans, Brands *items, int currQues) {
    char userInput;
    string userAnswer;
    cout << "Enter your answer (A/B/C/D): ";
    cin >> userInput;
    // Initialize userAnswer
    userAnswer = "WRONG ANSWER";
    // Get the userAnswer
    if (userInput == 'A' || userInput == 'a') userAnswer = ans[0];
    else if (userInput == 'B' || userInput == 'b') userAnswer = ans[1];
    else if (userInput == 'C' || userInput == 'c') userAnswer = ans[2];
    else if (userInput == 'D' || userInput == 'd') userAnswer = ans[3];
    // Check the userAnswer (return true if true answer otherwise false)
    if (userAnswer.compare(items[currQues].type) == 0) {
        cout << "Correct answer, proceed to next question." << endl;
        return true;
    } else {
        cout << "Wrong answer, You lose." << endl;
        return false;
    }
}