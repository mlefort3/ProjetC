#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "board.h"
#include "piece.h"
#define size 25

board initBoard() {
    int i;
    board Board;
    Board.taille = size;
    for (i=0 ;i<Board.taille ; i++) {
        Board.pieces[i].type = -1;
        Board.pieces[i].symb = '_';
    }
    Board.pieces[0] = newPiece('T',1);
    Board.pieces[4] = newPiece('T',1);
    Board.pieces[20] = newPiece('T',1);
    Board.pieces[24] = newPiece('T',1);
    return Board;
}

int isOver(board Board) {
    return 1; //attendre d'avoir toutes les conditions pour finir cette fonction
}

int setPiece(board Board, int location, int type) {
    if (Board.pieces[location].type == -1) {
        Board.pieces[location] = newPiece(int2symb(type),type); //attendre d'avoir toutes les conditions pour finir cette fonction
        return 1;
    }
    else {
        printf("Ce mouvement n'est pas autorisé !\n");
        return 0;
    }
}
        

piece getPiece(board Board, int location) {
    return Board.pieces[location];
}

int removePiece(int location) {
    return 1; //attendre d'avoir toutes les conditions pour finir cette fonction
}

int movePiece(int debut, int fin) {
    return 1;
}

void showBoard(board Board) {
    int i;
    printf("---------------------\n");
    for (i=0;i<5;i++) {
        printf("| %c | %c | %c | %c | %c |\n", showPiece(Board, 5*i), showPiece(Board, 5*i+1), showPiece(Board, 5*i+2), showPiece(Board, 5*i+3), showPiece(Board, 5*i+4));
    }
    printf("---------------------\n");
}

char showPiece(board Board, int location) {
    if (Board.pieces[location].type==0) {
        return 'C';
    }
    else if (Board.pieces[location].type==1) {
        return 'T';
    }
    return '_';
}