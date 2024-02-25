#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main () {

    //Declare Variables (User's Input, Random Number, & Computer's Play)
    string input; 
    int generatedNumber; 
    string computersPlay; 

    //Ask User for Input
    getline(cin, input);

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

    cout << "Hello World" << endl;

    //Generate Computer versus Player


    //Output Winner


    return 0;
}