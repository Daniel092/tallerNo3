#include <stdio.h>


int main(int argc, char *argv[]) {
	
	
	/*	Daniel Steven Agudelo Fernandez
		19/08/2018
		para este programa calcularemos la cantidad en pesos colombianos
		de dolares que el usuario tiene*/
	
	
	int CantidadDolares;
	float ValorDolar, CantidadPesosC;
	
	printf ("ingrese el valor en el que se encuentra el dolar actualmente \n");
	scanf ("%f", &ValorDolar);
	
	printf ("ingrese la cantidad de dolares que tiene \n");
	scanf ("%d", &CantidadDolares);
	
	/*procedemos a multiplicar la cantidad de dolares que tiene la persona
	por el valor del mismo*/
	
	CantidadPesosC = (CantidadDolares * ValorDolar);
	
	printf ("el valor de los dolares que tiene en pesos colombianos es de %f \n",CantidadPesosC);
	
	
	
	return 0;
}

