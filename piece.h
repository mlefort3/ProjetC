#ifndef __PIECE__
#define __PIECE__

typedef struct piece piece;
struct piece {
    char symb;
    int type; //0 c'est chèvre, 1 c'est tigre
};

piece newPiece(char symb, int type);

int isTiger(piece Piece);

int isGoat(piece Piece);

int pieceType(piece Piece);

char getSymb(piece Piece);

char int2symb(int type);

#endif