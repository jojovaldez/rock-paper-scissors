#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main () {

    //Declare Variables (User's Input, Random Number, & Computer's Play)
    string usersName;
    string usersInput; 
    int generatedNumber; 
    string computersPlay; 

    //Ask for User Name
    cout << "Enter Your Name: " << endl;
    getline(cin, usersName);

    //Ask User for Input
    cout << "Enter Your Play: " << endl;
    getline(cin, usersInput);

   //States Valid Inputs for User
    if ((usersInput != "Rock") && (usersInput != "Paper") && (usersInput != "Scissors") && (usersInput != "rock") && 
        (usersInput != "paper") && (usersInput != "scissors")) {
            cout << "Invalid Input!" << endl;
            cout << "Please enter again with either upper or lowercase \"Rock\" \"Paper\" \"Scissors\"" << endl;
            getline(cin, usersInput);
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

//Tik Tak Toe!!!
    //User Wins
    if (computersPlay == "Rock" && (usersInput == "Paper" || usersInput == "paper")) {
        cout << usersName << " Win!" << endl;
        cout << "Computer's Play: " << computersPlay << endl;
        cout << usersName << " Play: " << usersInput << endl; 
    }

    if (computersPlay == "Paper" && (usersInput == "Scissors" || usersInput == "scissors")) {
        cout << usersName << " Win!" << endl;
        cout << "Computer's Play: " << computersPlay << endl;
        cout << usersName << " Play: " << usersInput << endl; 
    }

    if (computersPlay == "Scissors" && (usersInput == "Rock" || usersInput == "rock")) {
        cout << usersName << " Win!" << endl;
        cout << "Computer's Play: " << computersPlay << endl;
        cout << usersName << " Play: " << usersInput << endl; 
    }

    //Computer Wins
    if (computersPlay == "Rock" && (usersInput == "Scissors" || usersInput == "scissors")) {
        cout << "Computer Wins!" << endl;
        cout << "Computer's Play: " << computersPlay << endl;
        cout << usersName << " Play: " << usersInput << endl; 
    }

    if (computersPlay == "Paper" && (usersInput == "Rock" || usersInput == "rock")) {
        cout << "Computer Wins!" << endl;
        cout << "Computer's Play: " << computersPlay << endl;
        cout << usersName << " Play: " << usersInput << endl; 
    }

    if (computersPlay == "Scissors" && (usersInput == "Paper" || usersInput == "paper")) {
        cout << "Computer Wins!" << endl;
        cout << "Computer's Play: " << computersPlay << endl;
        cout << usersName << " Play: " << usersInput << endl; 
    }


    //Generate Ties
    if ((computersPlay == "Rock" && (usersInput == "Rock" || usersInput == "rock")) ||
        (computersPlay == "Paper" && (usersInput == "Paper" || usersInput == "paper")) || 
        (computersPlay == "Scissors" && (usersInput == "Scissors" || usersInput == "scissors"))) {
            cout << "It's a Tie!" << endl;
            cout << "Computer's Play: " << computersPlay << endl;
            cout << usersName << " Play: " << usersInput << endl;
    }

    return 0;
}