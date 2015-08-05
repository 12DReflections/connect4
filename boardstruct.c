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
	
	struct board board1;
	
	
	//Draw board
	//Print a 2d board array	
	printf("\n\n 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
	printf("----------------------------\n");
	int h = 0,w = 1;
	for(h = 0; h<BOARDHEIGHT; h++){
		for(w = 1; w<=BOARDWIDTH; ++w){
			printf(" O |");
		}
		printf("\n----------------------------\n");	
	}

	enum cell_contents init;
	init = C_EMPTY;

	initialise_board(init, BOARDWIDTH);
}
	
struct board
{
	enum gameboard[BOARDHEIGHT][BOARDWIDTH] ;	
};
	


void initialise_board(enum cell_contents board[BOARDHEIGHT][BOARDWIDTH])
{
	struct boardType boardName;
	//2d board array
	//initialise blank
	//enum board[BOARDHEIGHT][BOARDWIDTH] ;	
	//Initialise Board with Blank	Enums
	int h = 0,w = 1;
		
	for(h = 0; h<BOARDHEIGHT; h++){
		for(w = 1; w<=BOARDWIDTH; ++w){
			//assign an enum
			 init = boardName.gameboard[h][w];
		}
	}
	

}

/**
 * In this requirement you are required to display the game board. 
 * The game board should be displayed as shown on the first page of the 
 * assignment specification. 
 * @param board the board to display
 **/
void display_board(enum cell_contents board[][BOARDWIDTH])
{


}
 

