#include <stdio.h>

/*	Daniel Steven Agudelo Fernandez
19/08/2018
Programa para encontrar el area de un triangulo*/


int main(int argc, char *argv[]) {
	
	int altura, base;
	float area;
	
	printf ("ingrese el valor de la base del trianglo \n");
	scanf("%d", &base);
	
	printf ("ingrese el valor de la altura del triangulo \n");
	scanf ("%d", &altura);
	
	
	area = (base * altura) /2;
	
	printf ("el area del triangulo es %.1f \n", area);
	
		
		
		
		
		
		
	return 0;
}

