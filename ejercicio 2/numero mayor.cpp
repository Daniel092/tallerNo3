#include <stdio.h>

/*	Daniel Steven Agudelo Fernandez
	19/08/2018
	esta programa nos dice cual de los numeros ingresados 
	es el mayor */
	
int main(int argc, char *argv[]) {
	
	int N1, N2, N3, Mayor;
	
	Mayor = 0;
	
	printf (" ingrese 3 numeros \n");
	scanf ("%d", &N1);
	scanf ("%d", &N2);
	scanf ("%d", &N3);
	
	if ((N1 > N2) && (N1 > N3)){
		Mayor = N1;
	}else if ((N2 > N1) && (N2 > N3)){
		Mayor = N2;
	}else if (( N3 > N1) && ( N3 > N2 )){
		Mayor = N3;
	}
	
	printf ("el numero mayor es %d \n", Mayor);
	
	return 0;
}

