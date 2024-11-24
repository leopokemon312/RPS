








#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to generate the computer's choice
string getComputerChoice() {
    int choice = rand() % 3 + 1; // Generates a random number between 1 and 3
    if (choice == 1) return "rock";
    else if (choice == 2) return "paper";
    else return "scissors";
}

// Function to get the user's choice
string getUserChoice() {
    string choice;
    cout << "Choose one of the following: rock, paper, or scissors: ";
    cin >> choice;

    // Validate the input
    while (choice != "rock" && choice != "paper" && choice != "scissors") {
        cout << "Invalid choice. Please enter rock, paper, or scissors: ";
        cin >> choice;
    }
    return choice;
}

// Function to determine the winner
string determineWinner(string userChoice, string computerChoice) {
    if (userChoice == computerChoice) return "tie";
    else if ((userChoice == "rock" && computerChoice == "scissors") ||
        (userChoice == "scissors" && computerChoice == "paper") ||
        (userChoice == "paper" && computerChoice == "rock"))
        return "user";
    else
        return "computer";
}

// Main game function
void playGame() {
    while (true) {
        string computerChoice = getComputerChoice();
        string userChoice = getUserChoice();

        cout << "\nThe computer chose: " << computerChoice << endl;

        string winner = determineWinner(userChoice, computerChoice);

        if (winner == "tie") {
            cout << "It's a tie! Let's play again.\n" << endl;
        }
        else if (winner == "user") {
            cout << "You win!\n" << endl;
            break;
        }
        else {
            cout << "The computer wins!\n" << endl;
            break;
        }
    }
}

int main() {
    srand(static_cast<unsigned>(time(0))); // Seed random number generator
    playGame(); // Start the game
    return 0;
}
