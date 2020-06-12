#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void print(char[][3]); // Prints the board to the screen
bool mark(int, int, bool, char[][3]); // Marks a spot with an X or an O
bool checkwin(char[][3]); // Checks the win condition

int main() {
    
    // Initialization
    char board[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }

    printf("Welcome to Tic Tac Toe\n");
    printf("Player1 -> X, Player2 -> O");
    printf("Enter coordinates to pick a place to place your chip, i.e.(1 2)");
    int choice1, choice2;
    bool isPlayer1 = true;
    while(true) {
        print(board);
        do {
            printf("Enter first and second coordinate: ex.(1 2): ");
            scanf("%d %d\n", &choice1, &choice2);
        } while((choice1 < 1 || choice1 > 9 || choice2 < 1 || choice2 > 9) && (mark(choice1, choice2, isPlayer1, board)));
        if (checkwin(board)) {
            if (isPlayer1) {
                printf("Congrats! Player1 wins!\n");
            } else {
                printf("Congrats! Player2 wins!\n");
            }
            break;
        }
        if (isPlayer1) {
            isPlayer1 = false;
        } else {
            isPlayer1 = true;
        }
    }

    return 0;
}

bool checkwin(char board[][3]) {
    if (board[0][0] == board[0][1] && board[0][1] == board[0][2]) {
        return true;
    }
    if (board[0][0] == board[1][0] && board[1][0] == board[2][0]) {
        return true;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return true;
    }
    if (board[2][0] == board[1][1] && board[1][1] == board[0][2]) {
        return true;
    }
    if (board[0][1] == board[1][1] && board[1][1] == board[2][1]) {
        return true;
    }
    if (board[0][2] == board[1][2] && board[1][2] == board[2][2]) {
        return true;
    }
    if (board[2][0] == board[2][1] && board[2][1] == board[2][2]) {
        return true;
    }
    return false;
}
bool mark(int choice1, int choice2, bool isPlayer1, char board[][3]) {
    if (board[choice1][choice2] != ' ') {
        printf("Spot already filled :(\n");
        return false;
    }

    if (isPlayer1) {
        board[choice1][choice2] == 'X';
    } else {
        board[choice1][choice2] == 'O';
    }
    return true;
}

void print(char board[][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j < 2) {
                printf("%c|", board[i][j]);
            } else {
                printf("%c\n", board[i][j]);
            }
        }
        if (i < 2) {
            printf("-----\n");
        }
    }
}
