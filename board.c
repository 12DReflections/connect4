/***********************************************************************
* COSC1076 - Advanced Programming Techniques
* Semester 2 2015 Assignment #1 
* Full Name        : EDIT HERE
* Student Number   : EDIT HERE
* Course Code      : EDIT HERE
* Program Code     : EDIT HERE
* Start up code provided by Paul Miller
***********************************************************************/
#include "board.h"
#include "player.h"

int main(){
	
	int player = 1; 
		
	
	enum cell_contents board[BOARDHEIGHT][BOARDWIDTH] ;	
	//Initialise Board with Blank	Enums
	int h = 0,w = 1;
	for(h = 0; h<BOARDHEIGHT; h++){
		for(w = 1; w<=BOARDWIDTH; ++w){
			//assign an enum
			 board[h][w] = C_EMPTY;
		}
	}

		//Draw board
	//Print a 2d board array	
	printf("\n\n 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
	printf("----------------------------\n");
	int h1 = 0,w1 = 1;
	for(h1 = 0; h1<BOARDHEIGHT; h1++){
		for(w1 = 1; w1<=BOARDWIDTH; ++w1){
			if(board[h1][w1] == C_EMPTY){
				printf(" ");
			} else if(board[h1][w1] == C_RED) {
				printf("O");
			} else if(board[h1][w1] == C_WHITE) {
				printf("X");
			}
			printf("\n----------------------------\n");	
		}
	}	
}

/*
	call if read to flush
	readRestOfLine()
	if(intput[strlen(input)-1 != '\n') {
		printf("input too long, try again. \n\n");
		readRestOfLine();
	} else {
	
	}
	
*/	
	

/*
void initialise_board(enum cell_contents board[][])
{
	//2d board array
	//initialise blank
	

}
*/
/**
 * In this requirement you are required to display the game board. 
 * The game board should be displayed as shown on the first page of the 
 * assignment specification. 
 * @param board the board to display
 **/
 /*
void display_board(enum cell_contents board[][])
{


}
 */

