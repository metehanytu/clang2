#include<stdio.h>
#include <stdlib.h>

typedef struct {
    char board[3][3];
    int turn;
} Game;


void printGame(Game game) {
    printf("\n-----------\n");
    int i,j;
	for (i = 0; i < 3; i++) {
	    for (j = 0; j < 3; j++) {
	        printf("|%c|",game.board[i][j]);
	    }
	    printf("\n");
	}
	
	printf("----------->");
	printf("Sira %s", game.turn == 1 ? "X" : "O");
}

int isGameOver(Game game) {
    //satır kontrol
    int i, j;
    for (i = 0; i < 3; i++) {
        int puanx = 0;
        int puany = 0;
        for (j = 0; j < 3; j++) {
            puanx += game.board[i][j] == 'X' ? 1 : 0;
            puany += game.board[i][j] == 'O' ? 1 : 0;
        }
        if (puanx == 3) {
            return 3; // X Kazandı
        }
        if (puany == 3) {
            return 2; // O Kazandı
        }
    }
    
    for (j = 0; j < 3; j++) {
        int puanx = 0;
        int puany = 0;
        for (i = 0; i < 3; i++) {
            puanx += game.board[i][j] == 'X' ? 1 : 0;
            puany += game.board[i][j] == 'O' ? 1 : 0;
        }
        if (puanx == 3) {
            return 3; // X Kazandı
        }
        if (puany == 3) {
            return 2; // O Kazandı
        }
    }
    
    int puanx = 0;
    int puany = 0;
    for (i = 0; i < 3; i++) {
        puanx += game.board[i][i] == 'X' ? 1 : 0;
        puany += game.board[i][i] == 'O' ? 1 : 0;
    }
    
    if (puanx == 3) {
        return 3; // X Kazandı
    }
    if (puany == 3) {
        return 2; // O Kazandı
    }
    
    puanx = 0;
    puany = 0;
    
    for (i = 0; i < 3; i++) {
        puanx += game.board[i][2-i] == 'X' ? 1 : 0;
        puany += game.board[i][2-i] == 'O' ? 1 : 0;
    }
    
    if (puanx == 3) {
        return 3; // X Kazandı
    }
    
    if (puany == 3) {
        return 2; // O Kazandı
    }
    
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (game.board[i][j] == '-') {
                return 0;
            }
        }
    }
    
    return 1;
}

void makeMove(Game *game, int x, int y) {
    if (x >= 3 || x < 0) {
        printf("Geçersiz Hamle!\n");
        return;
    }
    if (y >= 3 || y < 0) {
        printf("Geçersiz Hamle!\n");
        return;
    }
    
    if (game->board[x][y] == '-') {
        game->board[x][y] = game->turn == 1 ? 'X' : 'O';
	    game->turn = 1 - game->turn;
    } else {
        printf("Geçersiz Hamle!\n");
    }
    
}

int main()
{
	Game game;
	int i,j;
	for (i = 0; i < 3; i++) {
	    for (j = 0; j < 3; j++) {
	        game.board[i][j] = '-';
	    }
	}
	game.turn = 0;
	
	while(1) {
	    printf("Lütfen hamlenizi yapın: %s \n", game.turn == 1 ? "X" : "O");
	    
	    int x, y;
	    scanf("%d %d", &x, &y);
	    
	    makeMove(&game, x, y);
	    printGame(game);
	    
	    if (isGameOver(game) == 1) {
	        printf("Berabere Bitti");
	        break;
	    } else  if (isGameOver(game) == 2) {
	        printf("O Kazandı");
	        break;
	    } else  if (isGameOver(game) == 3) {
	        printf("X Kazandı");
	        break;
	    }
	    
	}


    return 0;
}
