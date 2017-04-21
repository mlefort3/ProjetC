baghchal: baghchal.c piece.o board.o
	gcc -o baghchal baghchal.c piece.o board.o
 
piece.o: piece.c
	gcc -c piece.c

board.o: board.c
	gcc -c board.c
