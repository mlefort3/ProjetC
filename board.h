#ifndef __BOARD__
#define __BOARD__
#include "piece.h"

typedef struct boardPieces {
    int taille;
    int *chevresMortes;
    int chevresPlacees;
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

int makeMoveTiger(board Board, int locationDeb, int locationFin);

void makeMoveGoat(board Board, int locationDeb, int locationFin);

int atNorth(board *Board, int location);

int atSouth(board *Board, int location);

int atWest(board *Board, int location);

int atEast(board *Board, int location);

int atNorthWest(board *Board, int location);

int atNorthEast(board *Board, int location);

int atSouthWest(board *Board, int location);

int atSouthEast(board *Board, int location);

void printMoves(board *Board, int locationDeb, int type);

int *tigerLocations(board *Board);

#endif