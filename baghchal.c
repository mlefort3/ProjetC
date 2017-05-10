#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "board.h"
#include "piece.h"

int goatTurn(board *Board, char joueur1[]) {
    if ((Board->chevresPlacees) < 20) {
        int locationDeb;
        printf("\nÀ vous de jouer %s, vous êtes les chèvres.\nRentrez le numéro de la case où vous souhaitez placer une chèvre.\n", joueur1);
        showBoard(*Board);
        printf("Emplacement voulu : ");
        scanf("%d",&locationDeb);
        setPiece(*Board, locationDeb, 0);
        Board->chevresPlacees = Board->chevresPlacees + 1;
    }
    else {
        int locationDeb, locationFin;
        printf("\nÀ vous de jouer %s, vous êtes les chèvres.\nVous devez choisir d'abord choisir la case de la chèvre à déplacer puis la case d'arrivée voulue.\n", joueur1);
        showBoard(*Board);
        printf("Emplacement de la chèvre à déplacer : ");
        scanf("%d",&locationDeb);
        printf("Emplacement d'arrivée voulu : ");
        scanf("%d", &locationFin);
        makeMoveGoat(*Board, locationDeb, locationFin);
    }
    return 1;
}

int tigerTurn(board *Board, char joueur2[]) {
    int locationDeb, locationFin;
    printf("\nÀ vous de jouer %s, vous êtes les tigres.\nVous devez choisir d'abord choisir la case du tigre à déplacer puis la case d'arrivée voulue.\n", joueur2);
    showBoard(*Board);
    
    int *tigers;
    tigers = tigerLocations(Board);
    
    printf("Emplacement du tigre à déplacer (%d, %d, %d, %d) : ", tigers[0], tigers[1], tigers[2], tigers[3]);
    scanf("%d",&locationDeb);
    printMoves(Board, locationDeb, 1);
    printf("Emplacement d'arrivée voulu : ");
    scanf("%d", &locationFin);
    makeMoveTiger(*Board, locationDeb, locationFin);
    return 1;
}


void partie2joueurs(board *Board, char joueur1[], char joueur2[]) {
    printf("\nBienvenue au BaghChal !\n");
    printf("Le joueur 1 est de type chèvre.\n");
    printf("Le joueur 2 est de type tigre.\n");
    
    int locationDeb, locationFin;
    while (isOver(*Board)) {
        goatTurn(Board, joueur1);
        
        tigerTurn(Board, joueur2);
    }
    printf("ok");
}

int main() {
    board partie = initBoard();
    board Parte2 = initBoard();
    partie2joueurs(&partie, "Yann", "Maxence");
    return 0;
}