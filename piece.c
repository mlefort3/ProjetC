#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "piece.h"

piece newPiece(char symb, int type) {
    piece Piece;
    Piece.symb = symb;
    //Piece.symb = malloc(sizeof(typeof(char)));
    Piece.type = type;
    return Piece;
}

int isTiger(piece Piece) {
    if (Piece.type == 0) {
        return 0;
    }
    else {
        return 1;
    }
}

int isGoat(piece Piece) {
    if (Piece.type == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int pieceType(piece Piece) {
    return Piece.type;
}

char getSymb(piece Piece) {
    return Piece.symb;
}

char int2symb(int type) {
    if (type == 0) {
        return 'C';
    }
    else if (type == 1) {
        return 'T';
    }
    else {
        return '_';
    }
}