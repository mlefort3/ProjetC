#ifndef __BOARD__
#define __BOARD__
#include "piece.h"

typedef struct boardPieces {
  int taille;
  piece *pieces;
} board;

int isOver(board Board);

int setPiece(board Board, piece Piece, int location);

piece getPiece(board Board, int location);

int putPiece(piece Piece, int location);

int removePiece(int location);

#endif