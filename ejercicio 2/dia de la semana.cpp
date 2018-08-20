#include <stdio.h>

int main(int argc, char *argv[]) {
	/*17/agosto/2018
	Daniel Steven Agudelo Fernandez
	Ingenieria en sistemas
	semestre 2 */
	
	/* lo que hace este programa es que dependiendo del numero 
	que ingrese el usuario este le dira a que dia de la semana pertenece*/
	
	int dia;
	
	printf("por favor ingrese un numero del 1 al 7 \n");
	scanf ("%d", &dia);
	
	if (dia == 1){
		printf ("Lunes");
	}else if (dia == 2){
		printf ("martes");
	}else if (dia == 3){
		printf ("miercoles");
	}else if (dia == 4){
		printf ("jueves");
	}else if (dia == 5){
		printf ("viernes");
	}else if (dia == 6){
		printf ("sabado");
	}else {
		printf ("domingo");
	}
	
	return 0;
}

