#include <stdio.h>

/*	Daniel Steven Agudelo Fernandez
	19/08/2018
	Programa para encontrar el area de un rectangulo*/


int main(int argc, char *argv[]) {
	
	
	int base,altura, area;
	
	printf("ingrese la base del rectangulo \n");
	scanf("%d", &base);
	
	printf("ingrese la altura del rectangulo \n");
	scanf("%d", &altura);
	
	area = (base * altura);
	
	printf("el area del rectangulo es %d", area);
	
	
	return 0;
}

