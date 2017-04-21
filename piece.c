#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "piece.h"

piece newPiece(char symb, int type) {
    piece Piece;
    Piece.symb = symb;
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