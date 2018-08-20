#include <stdio.h>

	/*	Daniel Steven Agudelo Fernandez
		19/08/2018
		este programa nos dice que numero es par y cual es impar*/

int main(int argc, char *argv[]) {
	
	int N;
	
	printf("ingrese un numero \n");
	scanf("%d", &N);
	
	if( N % 2 == 0){
		printf(" \n \n %d es un numero par \n \n ", N);
	}else{
		printf(" \n \n %d es un numero impar", N);
	}
	
	
	
	
	
	return 0;
}

