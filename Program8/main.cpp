#include <vector>
#include <iostream>

using namespace std;

const bool CLEAR_SCREEN = true;

void clearScreen() {
    cout << endl;

    if (CLEAR_SCREEN) {
        cout << "\033c";
    }

    cout << endl;

    return;
}

void drawBoard(const vector < char >&gameBoard) {
    clearScreen();
    for (int i = 0; i < 9; i += 3) {
        cout << "  " << gameBoard.at(i) << "  |  " << gameBoard.at(i + 1) << "  |  "
            << gameBoard.at(i + 2) << "  " << endl;
        if (i < 6) {
            cout << "-----|-----|-----" << endl;
        }
    }
    cout << endl;

    return;
}

void initVector(vector <char> &v) {

    for (int i = 0; i < 9; i +=1) {
        v.at(i) = 'a' + i;
    }
    
    return;
}

int convertPosition(char boardPosition) {

    string mapAtoZ = "abcdefghi";
    
    return mapAtoZ.find(boardPosition);
}

bool validPlacement(const vector<char>& gameBoard, int positionIndex) {

    if (positionIndex > 8 || positionIndex < 0 || gameBoard.at(positionIndex) == 'X' || gameBoard.at(positionIndex) == 'O') {
        return false;
    }
    else {
        return true;
    }
}

int getPlay(const vector<char> &gameBoard) {

    char boardPosition = ' ';
    int index;
    
    do {
    
        cout << "Please choose a position: ";
        cin >> boardPosition;
        cout << endl;
    
        index = convertPosition(boardPosition);
    
    } while (validPlacement(gameBoard, index) == false);
    
    return index;
}

bool gameWon(const vector<char> &gameBoard) {

    for (int i = 0; i < 3; i++) {
        
        if (gameBoard.at(i) == gameBoard.at(i+3) && gameBoard.at(i) == gameBoard.at(i+6)) {
            return true;
        }
        else if (gameBoard.at(3*i) == gameBoard.at(3*i+1) && gameBoard.at(3*i) == gameBoard.at(3*i+2)) {
            return true;
        }
        
    }
    
    if (gameBoard.at(0) == gameBoard.at(4) && gameBoard.at(0) == gameBoard.at(8)) {
        return true;
    }
    else if (gameBoard.at(2) == gameBoard.at(4) && gameBoard.at(2) == gameBoard.at(6)) {
        return true;
    }
    
    return false;
}

bool boardFull(const vector<char> &gameBoard) {

    int fullchecker = 0;
    
    for (int i = 0; i < 9; i++) {
        
        if (gameBoard.at(i) == 'X' || gameBoard.at(i) == 'O') {
            fullchecker++;
        }
        
    }
    
    if (fullchecker == 9) {
        return true;
    }
    else {
        return false;
    }
}


// Global constants for player representation
const int PLAYER1 = 0;
const int PLAYER2 = 1;

int main() {

    vector<char> gameBoard(9);
    int curPlay;
    int whosTurn = PLAYER1; // Player 1 always goes first and is 'X'

    initVector(gameBoard);

    drawBoard(gameBoard);


    while (gameWon(gameBoard) != true && boardFull(gameBoard) != true) {

        curPlay = getPlay(gameBoard);

        if (whosTurn == PLAYER1) {
            gameBoard.at(curPlay) = 'X';
        }
        else if (whosTurn == PLAYER2) {
            gameBoard.at(curPlay) = 'O';
        }

        if ((gameWon(gameBoard) != true && boardFull(gameBoard) != true)) {
            if (whosTurn == PLAYER1) {
                whosTurn = PLAYER2;
            }
            else if (whosTurn == PLAYER2) {
                whosTurn = PLAYER1;
            }
        }

        drawBoard(gameBoard);
    }

    if (whosTurn == PLAYER1 && gameWon(gameBoard) == true) {
        cout << "PLAYER 1 WINS!" << endl;
    }
    else if (whosTurn == PLAYER2 && gameWon(gameBoard) == true) {
        cout << "PLAYER 2 WINS!" << endl;
    }
    else if (boardFull(gameBoard) == true) {
        cout << "No one wins" << endl;
    }

    return 0;
}