#include <bits/stdc++.h>
#include <vector>

using namespace std;

// Function to initialize the Tic-Tac-Toe board
void initializeBoard(vector<vector<char> > &board) {
    for (int i = 0; i < 3; i++) {
        vector<char> row(3, ' ');
        board.push_back(row);
    }
}

// Function to display the Tic-Tac-Toe board
void Display_Board(const vector<vector<char> > &board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2)
                cout << " | ";
        }
        cout << endl;
        if (i < 2)
            cout << "---------" << endl;
    }
    cout << endl;
}


bool Check_Winner(const vector<vector<char> > &board, char player) {
    
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;
    return false;
}

bool Draw(const vector<vector<char> > &board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

// Function to play the game
void Start_Game() {
    vector<vector<char> >board;
    initializeBoard(board);
    char currentPlayer = 'X';

    while (true) {
        Display_Board(board);

        int row, col;
        cout << "Player " << currentPlayer << ", enter row and column (0-2): ";
        cin >> row >> col;

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "Invalid move. Try again" << endl;
            continue;
        }

        board[row][col] = currentPlayer;

        if (Check_Winner(board, currentPlayer)) {
            Display_Board(board);
            cout << "Player " << currentPlayer << " is winner! Congratulations!" << endl;
            break;
        }

        if (Draw(board)) {
            Display_Board(board);
            cout << "Match draw " << endl;
            break;
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
}

int main() {
    cout << "Welcome to Tic-Tac-Toe Game" << endl;
    Start_Game();
    return 0;
}
