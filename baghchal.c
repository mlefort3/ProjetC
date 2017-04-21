#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "board.h"
#include "piece.h"

int main() {
    board Board = initBoard();
    board Board2 = initBoard();
    showBoard(Board);
    setPiece(Board, 1, 0);
    showBoard(Board);
    setPiece(Board, 0, 0);
    showBoard(Board);
    return 0;
}