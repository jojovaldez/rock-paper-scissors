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
    string gameContinuation;

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

    //Ask User if they Want to Play/ Continue
    cout << "Want to Play?" << endl;
    cout << "Type Y (yes) or N (no) ";
    getline(cin, gameContinuation);

    //Invalid Inputs for Game Continuation
    if ((gameContinuation != "Y" && gameContinuation != "N")) {
        cout << "Invalid Input!" << endl;
        cout << "Please try again and enter with no spaces and only uppercase \"Y\" (yes) or \"N\" (no) ";
        getline(cin, gameContinuation);
    } else if (gameContinuation == "N") {
        cout << "Come Back Soon!" << endl;
        cout << endl;
    }

    //While Statement to Keep Game Going
    while (gameContinuation == "Y") {
        cout << "Enter Your Play: " << endl;     //Asks for Users Input
        getline(cin, usersInput);
        
        //Invalid Inputs for UsersInput
        if ((usersInput != "Rock") && (usersInput != "Paper") && (usersInput != "Scissors") && (usersInput != "rock") && 
            (usersInput != "paper") && (usersInput != "scissors")) {
                cout << "Invalid Input!" << endl;
                cout << "Please try again and enter with no spaces and only upper or lowercase \"Rock\" \"Paper\" \"Scissors\": ";
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

        //User Wins
        if (computersPlay == "Rock" && (usersInput == "Paper" || usersInput == "paper")) {
            cout << endl;
            cout << usersName << " Win!" << endl;
            cout << "Computer's Play: " << computersPlay << endl;
            cout << usersName << " Play: " << usersInput << endl; 
            userScore += 1;
        }

        if (computersPlay == "Paper" && (usersInput == "Scissors" || usersInput == "scissors")) {
            cout << endl;
            cout << usersName << " Win!" << endl;
            cout << "Computer's Play: " << computersPlay << endl;
            cout << usersName << " Play: " << usersInput << endl; 
            userScore += 1;
        }

        if (computersPlay == "Scissors" && (usersInput == "Rock" || usersInput == "rock")) {
            cout << endl;
            cout << usersName << " Win!" << endl;
            cout << "Computer's Play: " << computersPlay << endl;
            cout << usersName << " Play: " << usersInput << endl; 
            userScore += 1;
        }

        //Computer Wins
        if (computersPlay == "Rock" && (usersInput == "Scissors" || usersInput == "scissors")) {
            cout << endl;
            cout << "Computer Wins!" << endl;
            cout << "Computer's Play: " << computersPlay << endl;
            cout << usersName << " Play: " << usersInput << endl; 
            computerScore += 1;
        }

        if (computersPlay == "Paper" && (usersInput == "Rock" || usersInput == "rock")) {
            cout << endl;
            cout << "Computer Wins!" << endl;
            cout << "Computer's Play: " << computersPlay << endl;
            cout << usersName << " Play: " << usersInput << endl; 
            computerScore += 1;
        }

        if (computersPlay == "Scissors" && (usersInput == "Paper" || usersInput == "paper")) {
            cout << endl;
            cout << "Computer Wins!" << endl;
            cout << "Computer's Play: " << computersPlay << endl;
            cout << usersName << " Play: " << usersInput << endl; 
            computerScore += 1;
        }

        //Generate Ties
        if ((computersPlay == "Rock" && (usersInput == "Rock" || usersInput == "rock")) ||
            (computersPlay == "Paper" && (usersInput == "Paper" || usersInput == "paper")) || 
            (computersPlay == "Scissors" && (usersInput == "Scissors" || usersInput == "scissors"))) {
            cout << endl;
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

        //End Game
        cout << "Want to Play Again? Enter \"Y\" or \"N\": ";
        getline(cin, gameContinuation);

        //Invalid Inputs for Game Continuation
        if ((gameContinuation != "Y" && gameContinuation != "N")) {
            cout << "Invalid Input!" << endl;
            cout << "Please try again and enter with no spaces and only uppercase \"Y\" (yes) or \"N\" (no) ";
            getline(cin, gameContinuation);
        } 

         if (gameContinuation == "N") {
            cout << "Thanks for Playing!" << endl;
            cout << "Come Back Soon!" << endl;
        } 
    }
    
    return 0;
}
