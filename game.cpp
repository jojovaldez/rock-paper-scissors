#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main () {

    //Declare Variables (User's Input, Random Number, & Computer's Play)
    string usersInput; 
    int generatedNumber; 
    string computersPlay; 

    //Ask User for Input
    getline(cin, usersInput);

    //States Valid Inputs for User
    if (usersInput != "Rock" || usersInput != "Paper" || usersInput != "Scissors" || usersInput != "rock" || 
        usersInput != "paper" || usersInput != "scissors") {
            cout << "Invalid Input!" << endl;
            cout << "Please enter again with either upper or lowercase \"Rock\" \"Paper\" \"Scissors\"" << endl;
            getling(cin, usersInput);
        }

    //Randomaly Generated Number
    srand(time(NULL));
    generatedNumber = (rand() % 3) + 1;

    //Generates Computers Play
    if (generatedNumber == 1) {
        computersPlay = "Rock";
    }
    else if (generatedNumber == 2) {
        computersPlay = "Paper";
    }
    else {
        computersPlay = "Scissors";
    }

    //Generate Ties
    if ((computersPlay == "Rock" && usersInput == "Rock") || (computersPlay == "Paper" && usersInput == "Paper") || 
        (computersPlay == "Scissors" && usersInput == "Scissors")) {
            cout << "It's a Tie!" << endl;
            cout << "Computer's Play: " << computersPlay << endl;
            cout << "Your Play: " << usersInput << endl;
    }

    return 0;
}