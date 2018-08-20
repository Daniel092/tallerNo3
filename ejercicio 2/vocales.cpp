#include <stdio.h>


	/*	Daniel Steven Agudelo Fernandez
		19/08/2018
		este programa nos dice si es una vocal minuscula o mayuscula
		o si no es una vocal*/

int main(int argc, char *argv[]) {
	
	char letra;
	
	printf("ingrese una letra \n");
	letra = getchar();
	
	if(letra == 'a'|| letra == 'e'|| letra== 'i'|| letra== 'o'|| letra == 'u'){
		printf("la letra ingresada es una vocal en minuscula");
	}else if(letra == 'A'|| letra == 'E'|| letra == 'I'|| letra == 'O'|| letra == 'U'){
		printf("la letra ingresada es una vocal en mayuscula");
	}else{
		printf("la letra no es una vocal");
	}
	
	
	
	return 0;
}

