#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char board[8][8] = {
    {'r','n','b','q','k','b','n','r'},
    {'p','p','p','p','p','p','p','p'},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {'P','P','P','P','P','P','P','P'},
    {'R','N','B','Q','K','B','N','R'}
};

void printBoard() {
    cout << "  a b c d e f g h\n";
    for (int i = 0; i < 8; ++i) {
        cout << 8 - i << " ";
        for (int j = 0; j < 8; ++j) {
            cout << board[i][j] << " ";
        }
        cout << 8 - i << endl;
    }
    cout << "  a b c d e f g h\n";
}

bool isInsideBoard(int row, int col) {
    return row >= 0 && row < 8 && col >= 0 && col < 8;
}

bool movePiece(string from, string to, bool whiteTurn) {
    int fromRow = 8 - (from[1] - '0');
    int fromCol = from[0] - 'a';
    int toRow = 8 - (to[1] - '0');
    int toCol = to[0] - 'a';

    if (!isInsideBoard(fromRow, fromCol) || !isInsideBoard(toRow, toCol)) {
        cout << "Invalid position!" << endl;
        return false;
    }

    char piece = board[fromRow][fromCol];

    if (piece == ' ') {
        cout << "No piece at source!" << endl;
        return false;
    }

    // Check for correct turn
    if (whiteTurn && islower(piece)) {
        cout << "It's White's turn!" << endl;
        return false;
    }
    if (!whiteTurn && isupper(piece)) {
        cout << "It's Black's turn!" << endl;
        return false;
    }

    // Basic move: No validation of piece legality yet
    board[toRow][toCol] = piece;
    board[fromRow][fromCol] = ' ';
    return true;
}

int main() {
    string from, to;
    bool whiteTurn = true;

    while (true) {
        printBoard();
        cout << (whiteTurn ? "White" : "Black") << "'s move (e.g. e2 e4): ";
        cin >> from >> to;

        if (from == "exit") break;

        if (movePiece(from, to, whiteTurn)) {
            whiteTurn = !whiteTurn;
        }
    }

    return 0;
}
