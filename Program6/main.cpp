#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int PLAYER1 = 0;
const int PLAYER2 = 1;
const int WINNING_SCORE = 100;


int printIntro() {
    cout << "Welcome to the dice game Pig!" << endl << "The objective is to be first to score 100 points." << endl << endl;
    
    return 0;
}

int humanTurn(string name, int totalscore) {
    int rollget = 0;
    int turnscore = 0;
    char userChoice = 'y';
    
    while ((userChoice != 'n') && (rollget != 1) && ((totalscore + turnscore) <= WINNING_SCORE)) {
        cout << name << endl;
        rollget = rand() % 6 + 1;
        turnscore += rollget;
        
            if (rollget != 1) {
            
                cout << "You rolled a " << rollget << endl;
                cout << "Your score: " << totalscore + turnscore << endl;
                if ((totalscore + turnscore) < WINNING_SCORE) {
                    cout << "Do you want to roll again? (y/n): ";
                    cin >> userChoice;
                    cout <<endl;
                }
                else if ((totalscore + turnscore) > WINNING_SCORE) {
                    cout << endl;
                    cout << name << " wins!" << endl;
                }
            }
            else {
                cout << "You rolled a 1 (PIG!)" << endl;
                cout << "Your turn is over"<< endl;
            
                cout << "Your score: " << totalscore << endl <<endl ;    
                turnscore = 0;
            }
    }
    
    totalscore += turnscore;
    
    return totalscore;
}

int main() {
    srand(4444);

    int turn = PLAYER1;
    int player1score = 0;
    int player2score = 0;
    string player1name;
    string player2name;

    printIntro();

    cout << "Player 1 - Enter your name: " << endl;
    cin >> player1name;
    cout << "Player 2 - Enter your name: " << endl;
    cin >> player2name;

    while (player1score < WINNING_SCORE && player2score < WINNING_SCORE) {

        if (turn == PLAYER1) {
            player1score = humanTurn(player1name, player1score);
            
        }
        else {
            player2score = humanTurn(player2name, player2score);
            
        }
        
        turn = 1 - turn;

    }
    

    
    

    return 0;
}