#include "stdio.h"

int main() {

//Input char, cast to int, print statement
//test errors


printf("Welcome to connect 4 \n* \n--------------------\n* 1. Play Game\n* 2. Display High Scores\n* 3. Quit\n* Please enter your choice:");
	char *userInput;
	while(fgets(userInput, 64,  stdin)){
		printf("\nUserInput:%s",userInput);
		
		if(strncmp(userInput, "1", 1)  == 0){ 
			printf("\nPlay Game");
		}if(strncmp(userInput, "2", 1)  == 0){ 
			printf("\nHigh Scores");
		} if(strncmp(userInput, "3", 1) == 0){ 
		printf("\nQuitting...\n");
		break;	
		}
	}
return 0;
}