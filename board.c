#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "board.h"
#include "piece.h"
#define size 25

board initBoard() {
    int i;
    board Board;
    Board.taille = size;
    int Zero = 0;
    Board.chevresMortes = &Zero;
    Board.chevresPlacees = 0;
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
    /*if (*(Board->chevresMortes) < 5) {
        return 1;
    }*/
    return 1;
}

int setPiece(board Board, int location, int pion) {
    if (1) {//(Board.pieces[location].type == -1) {
        Board.pieces[location] = newPiece(int2symb(pion),pion); //attendre d'avoir toutes les conditions pour finir cette fonction
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
    return 0; //attendre d'avoir toutes les conditions pour finir cette fonction
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

int makeMoveTiger(board Board, int locationDeb, int locationFin) {
    if (Board.pieces[locationDeb].type != 1) {
        printf("Le mouvement n'est pas autorisé !\n");
        return 0;
    }
    if ((Board.pieces[locationDeb+1].type==0) && (locationFin==locationDeb+2)) {
        printf("Bravo vous avez mangé une chèvre !\n");
        setPiece(Board, locationDeb+1, -1);
        setPiece(Board, locationDeb+2, 1);
        setPiece(Board, locationDeb, -1);
        Board.chevresMortes = (Board.chevresMortes) + 1;
        if (*(Board.chevresMortes) <= 1) {
            printf("Il y a %d chèvre morte.\n", *Board.chevresMortes);
        }
        else {
            printf("Il y a %d chèvres mortes.\n", *Board.chevresMortes);
        }
        return 1;
    }
    
    if ((Board.pieces[locationDeb-1].type==0) && (locationFin==locationDeb-2)) {
        printf("Bravo vous avez mangé une chèvre !\n");
        setPiece(Board, locationDeb-1, -1);
        setPiece(Board, locationDeb-2, 1);
        setPiece(Board, locationDeb, -1);
        *Board.chevresMortes = (*Board.chevresMortes) + 1;
        if (*(Board.chevresMortes) <= 1) {
            printf("Il y a %d chèvre morte.\n", *Board.chevresMortes);
        }
        else {
            printf("Il y a %d chèvres mortes.\n", *Board.chevresMortes);
        }
        return 1;
    }
    
    if ((Board.pieces[locationDeb-6].type==0) && (locationFin==locationDeb-12)) {
        printf("Bravo vous avez mangé une chèvre !\n");
        setPiece(Board, locationDeb-6, -1);
        setPiece(Board, locationDeb-12, 1);
        setPiece(Board, locationDeb, -1);
        *Board.chevresMortes = *(Board.chevresMortes) + 1;
        if (*(Board.chevresMortes) <= 1) {
            printf("Il y a %d chèvre morte.\n", *Board.chevresMortes);
        }
        else {
            printf("Il y a %d chèvres mortes.\n", *Board.chevresMortes);
        }
        return 1;
    }
    
    if ((Board.pieces[locationDeb-5].type==0) && (locationFin==locationDeb-10)) {
        printf("Bravo vous avez mangé une chèvre !\n");
        setPiece(Board, locationDeb-5, -1);
        setPiece(Board, locationDeb-10, 1);
        setPiece(Board, locationDeb, -1);
        *Board.chevresMortes = *(Board.chevresMortes) + 1;
        if (*(Board.chevresMortes) <= 1) {
            printf("Il y a %d chèvre morte.\n", *Board.chevresMortes);
        }
        else {
            printf("Il y a %d chèvres mortes.\n", *Board.chevresMortes);
        }
        return 1;
    }
    
    if ((Board.pieces[locationDeb-4].type==0) && (locationFin==locationDeb-8)) {
        printf("Bravo vous avez mangé une chèvre !\n");
        setPiece(Board, locationDeb-4, -1);
        setPiece(Board, locationDeb-8, 1);
        setPiece(Board, locationDeb, -1);
        *Board.chevresMortes = *(Board.chevresMortes) + 1;
        if (*(Board.chevresMortes) <= 1) {
            printf("Il y a %d chèvre morte.\n", *Board.chevresMortes);
        }
        else {
            printf("Il y a %d chèvres mortes.\n", *Board.chevresMortes);
        }
        return 1;
    }
    
    if ((Board.pieces[locationDeb+6].type==0) && (locationFin==locationDeb+12)) {
        printf("Bravo vous avez mangé une chèvre !\n");
        setPiece(Board, locationDeb+6, -1);
        setPiece(Board, locationDeb+12, 1);
        setPiece(Board, locationDeb, -1);
        *Board.chevresMortes = *(Board.chevresMortes) + 1;
        if (*(Board.chevresMortes) <= 1) {
            printf("Il y a %d chèvre morte.\n", *Board.chevresMortes);
        }
        else {
            printf("Il y a %d chèvres mortes.\n", *Board.chevresMortes);
        }
        return 1;
    }
    
    if ((Board.pieces[locationDeb+5].type==0) && (locationFin==locationDeb+10)) {
        printf("Bravo vous avez mangé une chèvre !\n");
        setPiece(Board, locationDeb+5, -1);
        setPiece(Board, locationDeb+10, 1);
        setPiece(Board, locationDeb, -1);
        *Board.chevresMortes = *(Board.chevresMortes) + 1;
        if (*(Board.chevresMortes) <= 1) {
            printf("Il y a %d chèvre morte.\n", *Board.chevresMortes);
        }
        else {
            printf("Il y a %d chèvres mortes.\n", *Board.chevresMortes);
        }
        return 1;
    }
    
    if ((Board.pieces[locationDeb+4].type==0) && (locationFin==locationDeb+8)) {
        printf("Bravo vous avez mangé une chèvre !\n");
        setPiece(Board, locationDeb+4, -1);
        setPiece(Board, locationDeb+8, 1);
        setPiece(Board, locationDeb, -1);
        *Board.chevresMortes = *(Board.chevresMortes) + 1;
        if (*(Board.chevresMortes) <= 1) {
            printf("Il y a %d chèvre morte.\n", *Board.chevresMortes);
        }
        else {
            printf("Il y a %d chèvres mortes.\n", *Board.chevresMortes);
        }
        return 1;
    }
    
    return 0;
}

void makeMoveGoat(board Board, int locationDeb, int locationFin) {
    setPiece(Board, locationDeb, -1);
    setPiece(Board, locationFin, 0);
}

int atNorth(board *Board, int location) {
    if (location < 5) {
        return - 2;
    }
    else {
        return Board->pieces[location-5].type;
    }
    return - 1;
}

int atSouth(board *Board, int location) {
    if (location > 19) {
        return - 2;
    }
    else {
        return Board->pieces[location+5].type;
    }
    return - 1;
}

int atWest(board *Board, int location) {
    if (location%5 == 0) {
        return - 2;
    }
    else {
        return Board->pieces[location-1].type;
    }
    return - 1;
}



int atEast(board *Board, int location) {
    if (location%5 == 4) {
        return - 2;
    }
    else {
        return Board->pieces[location+1].type;
    }
    return - 1;
}

int atNorthWest(board *Board, int location) {
    int i = location;
    if (i%5 == 0||i < 5||i == 7||i == 9||i == 11||i == 13||i == 17||i == 19||i ==21||i == 23) {
        return - 2;
    }
    else {
        return Board->pieces[location-6].type;
    }
    return - 1;
}

int atNorthEast(board *Board, int location) {
    int i = location;
    if (i%5 == 4||i < 5||i == 5||i == 7||i == 11||i == 13||i == 15||i == 17||i == 21||i == 23) {
        return - 2;
    }
    else {
        return Board->pieces[location-6].type;
    }
    return - 1;
}

int atSouthWest(board *Board, int location) {
    int i = location;
    if (i%5 == 0||i > 19||i == 7||i == 9||i == 11||i == 13||i == 17||i == 19||i == 21||i == 23) {
        return - 2;
    }
    else {
        return Board->pieces[location-6].type;
    }
    return - 1;
}

int atSouthEast(board *Board, int location) {
    int i = location;
    if (i%5 == 4||i > 19||i == 5||i == 7||i == 11||i == 13||i == 15||i == 17||i == 21||i == 23) {
        return - 2;
    }
    else {
        return Board->pieces[location-6].type;
    }
    return - 1;
}

void printMoves(board *Board, int locationDeb, int type) {
    int booleen = 0;
    printf("Vous pouvez allez dans les cases : ");
    
    int nbrNorthWest = atNorthWest(Board, locationDeb);
    int nbrNorth = atNorth(Board, locationDeb);
    int nbrNorthEast = atNorthEast(Board, locationDeb);
    int nbrWest = atWest(Board, locationDeb);
    int nbrEast = atEast(Board, locationDeb);
    int nbrSouthWest = atSouthWest(Board, locationDeb);
    int nbrSouth = atSouth(Board, locationDeb);
    int nbrSouthEast = atSouthEast(Board, locationDeb);
    
    if (type == 0) {
        if (nbrNorthWest > -2) {
            if (booleen == 0) {
                printf("%d", locationDeb-6);
                booleen = 1;
            }
            else {
                printf(", %d", locationDeb-6);
            }
        }
        if (nbrNorth > -2) {
            if (booleen == 0) {
                printf("%d", locationDeb-5);
                booleen = 1;
            }
            else {
                printf(", %d", locationDeb-5);
            }
        }
        if (nbrNorthEast > -2) {
            if (booleen == 0) {
                printf("%d", locationDeb-4);
                booleen = 1;
            }
            else {
                printf(", %d", locationDeb-4);
            }
        }
        
        if (nbrWest > -2) {
            if (booleen == 0) {
                printf("%d", locationDeb-1);
                booleen = 1;
            }
            else {
                printf(", %d", locationDeb-1);
            }
        }
        if (nbrEast > -2) {
            if (booleen == 0) {
                printf("%d", locationDeb+1);
                booleen = 1;
            }
            else {
                printf(", %d", locationDeb+1);
            }
        }
            
        if (nbrSouthWest > -2) {
            if (booleen == 0) {
                printf("%d", locationDeb+4);
                booleen = 1;
            }
            else {
                printf(", %d", locationDeb+4);
            }
        }
        if (nbrSouth > -2) {
            if (booleen == 0) {
                printf("%d", locationDeb+5);
                booleen = 1;
            }
            else {
                printf(", %d", locationDeb+5);
            }
        }
        if (nbrSouthEast > -2) {
            if (booleen == 0) {
                printf("%d", locationDeb+6);
                booleen = 1;
            }
            else {
                printf(", %d", locationDeb+6);
            }
        }
    }
    
    else if (type == 1) {
        
        if (nbrNorthWest > -2) {
            if ((booleen == 0) && (nbrNorthWest != 0)) {
                printf("%d", locationDeb-6);
                booleen = 1;
            }
            else if ((booleen == 0) && (nbrNorthWest == 0)) {
                printf("%d", locationDeb-12);
                booleen = 1;
            }
            else if (booleen ==1 && (nbrNorthWest == 0)) {
                printf(", %d", locationDeb-12);
            }
            else {
                printf(", %d", locationDeb-6);
            }
        }
        
        if (nbrNorth > -2) {
            if ((booleen == 0) && (nbrNorth != 0)) {
                printf("%d", locationDeb-5);
                booleen = 1;
            }
            else if ((booleen == 0) && (nbrNorth == 0)) {
                printf("%d", locationDeb-10);
                booleen = 1;
            }
            else if (booleen ==1 && (nbrNorth == 0)) {
                printf(", %d", locationDeb-10);
            }
            else {
                printf(", %d", locationDeb-5);
            }
        }
        
        if (nbrNorthEast > -2) {
            if ((booleen == 0) && (nbrNorthEast != 0)) {
                printf("%d", locationDeb-4);
                booleen = 1;
            }
            else if ((booleen == 0) && (nbrNorthEast == 0)) {
                printf("%d", locationDeb-8);
                booleen = 1;
            }
            else if (booleen ==1 && (nbrNorthEast == 0)) {
                printf(", %d", locationDeb-8);
            }
            else {
                printf(", %d", locationDeb-4);
            }
        }
        
        if (nbrNorthWest > -2) {
            if ((booleen == 0) && (nbrNorthWest != 0)) {
                printf("%d", locationDeb-1);
                booleen = 1;
            }
            else if ((booleen == 0) && (nbrNorthWest == 0)) {
                printf("%d", locationDeb-2);
                booleen = 1;
            }
            else if (booleen ==1 && (nbrNorthWest == 0)) {
                printf(", %d", locationDeb-2);
            }
            else {
                printf(", %d", locationDeb-1);
            }
        }
        
        if (nbrEast > -2) {
            if ((booleen == 0) && (nbrEast != 0)) {
                printf("%d", locationDeb+1);
                booleen = 1;
            }
            else if ((booleen == 0) && (nbrEast == 0)) {
                printf("%d", locationDeb+2);
                booleen = 1;
            }
            else if (booleen ==1 && (nbrEast == 0)) {
                printf(", %d", locationDeb+2);
            }
            else {
                printf(", %d", locationDeb+1);
            }
        }
            
        if (nbrSouthWest > -2) {
            if ((booleen == 0) && (nbrSouthWest != 0)) {
                printf("%d", locationDeb+4);
                booleen = 1;
            }
            else if ((booleen == 0) && (nbrSouthWest == 0)) {
                printf("%d", locationDeb+8);
                booleen = 1;
            }
            else if (booleen ==1 && (nbrSouthWest == 0)) {
                printf(", %d", locationDeb+8);
            }
            else {
                printf(", %d", locationDeb+4);
            }
        }
        
        if (nbrSouth > -2) {
            if ((booleen == 0) && (nbrSouth != 0)) {
                printf("%d", locationDeb+5);
                booleen = 1;
            }
            else if ((booleen == 0) && (nbrSouth == 0)) {
                printf("%d", locationDeb+10);
                booleen = 1;
            }
            else if (booleen ==1 && (nbrSouth == 0)) {
                printf(", %d", locationDeb+10);
            }
            else {
                printf(", %d", locationDeb+5);
            }
        }
        
        if (nbrSouthEast > -2) {
            if ((booleen == 0) && (nbrSouthEast != 0)) {
                printf("%d", locationDeb+6);
                booleen = 1;
            }
            else if ((booleen == 0) && (nbrSouthEast == 0)) {
                printf("%d", locationDeb+12);
                booleen = 1;
            }
            else if (booleen ==1 && (nbrSouthEast == 0)) {
                printf(", %d", locationDeb+12);
            }
            else {
                printf(", %d", locationDeb+6);
            }
        }
    }
    printf(".\n");
}

int *tigerLocations(board *Board) {
    int *tiger = malloc(sizeof(int)*4);
    int cpt = 0;
    for (int i=0 ; i<25 ; i++) {
        if (Board->pieces[i].type==1) {
            tiger[cpt] = i;
            cpt ++;
        }
    }
    return tiger;
}