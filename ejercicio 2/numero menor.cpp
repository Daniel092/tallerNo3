#include <stdio.h>

	/*	Daniel Steven Agudelo Fernandez
		19/08/2018
		este programa nos dice cual de los numeros ingresados
		es el menor */

int main(int argc, char *argv[]) {
	
	int N1, N2, N3, Nmenor;
	
		printf("ingrese 3 numeros \n");
		scanf("%d", &N1);
		scanf("%d", &N2);
		scanf("%d", &N3);
		
		if ((N1 < N2) && (N1 < N3)){
			Nmenor = N1;
		}else if((N2 < N1) && (N2 < N3)){
			Nmenor = N2;
		}else if ((N3 < N1) && (N3 < N2)){
			Nmenor = N3;
		}
	
			printf("el numero menor es %d  ", Nmenor);
	
	
	
	return 0;
}

