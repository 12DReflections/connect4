#include "stdio.h"

struct info
{
	int size;
};

int main(){
	struct info structSize;
	structSize.size = 5;
	
	int sizerevise;
	sizerevise  = doSomthing(structSize.size);
	
	printf("%d", sizerevise);
	
	return 0;
}

int doSomthing(int z) {
	struct info structSize;

	structSize.size = z * 2;
	return z;
}