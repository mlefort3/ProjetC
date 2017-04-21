#ifndef __BOARD__
#define __BOARD__
#include "piece.h"

typedef struct boardPieces {
  int taille;
  piece *pieces;
} board;

board initBoard();

int isOver(board Board);

int setPiece(board Board, int location, int type);

piece getPiece(board Board, int location);

int putPiece(piece Piece, int location);

int removePiece(int location);

int movePiece(int debut, int fin);

void showBoard(board Board);

char showPiece(board Board, int location);

#endif