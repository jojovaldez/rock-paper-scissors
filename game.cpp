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
    int computerScore;
    int userScore; 

    //Set Standards
    computerScore = 0;
    userScore = 0;

    //Welcome Message
    cout << "           |---------------------------|" << endl;
    cout << "           |  ROCK - PAPER - SCISSORS  |" << endl;
    cout << "           |---------------------------|" << endl;

    //Game Rules & Logic
    cout << "Welcome to the Classic Game of Rock. Paper. Scissors." << endl;
    cout << "How To Play: The player types their choice (rock, paper, or scissors), and the computer randomly selects its move." << endl;
    cout << "             The winner is determined based on the traditional rules of the game." << endl;
    cout << endl;
    cout << "Rules:" << endl;
    cout << "  \"Rock Beats Paper.\", \"Paper Beats Rock\", \"Scissors Beats Paper\" (and vice-versa)" << endl;
    cout << endl;
    cout << "That's It. Good Luck! And May The Odds of Rock. Paper. Scissors. Be In Your Favor." << endl;
    cout << endl;

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
            cout << "Please try again and enter with no spaces and only upper or lowercase \"Rock\" \"Paper\" \"Scissors\"" << endl;
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
    if (true) {
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
        userScore += 1;
    }

    //Computer Wins
    if (true) {
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
        computerScore += 1;
    }

    //Generate Ties
    if ((computersPlay == "Rock" && (usersInput == "Rock" || usersInput == "rock")) ||
        (computersPlay == "Paper" && (usersInput == "Paper" || usersInput == "paper")) || 
        (computersPlay == "Scissors" && (usersInput == "Scissors" || usersInput == "scissors"))) {
            cout << "It's a Tie!" << endl;
            cout << "Computer's Play: " << computersPlay << endl;
            cout << usersName << " Play: " << usersInput << endl;
    }

    //Showcase Scoreboard
    cout << endl;
    cout << "---Score Board---" << endl;
    cout << usersName << " Score: " << userScore << endl;
    cout << "Computer's Score: " << computerScore << endl;
    cout << endl;

    return 0;
}