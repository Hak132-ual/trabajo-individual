/*
** Descripción: Plantilla de ejecución repetida
** Asunto: primeros pasos 
*/


#include <stdio.h> // operaciones de entrada salida
#include <stdlib.h> // operaciones sobre memoria dinámica
#include <ctype.h> // operaciones sobre cadenas
#include <math.h>  //operaciones matemáticas


int main()
{
	char c;

	do
	{
		system("cls||clear"); // Limpia el terminal

		printf("\n");
		printf("======\n\n");

#define NOMBRE "computadora"
	{
    printf("\n \n Hola mundo, me llamo  %s \n \n", NOMBRE);
    return 0;
    }

		printf("\n\n¿Desea efectuar una nueva operación (s/n)? ");
		scanf(" %c", &c);
	} 
    while ((c != 'N') && (c != 'n'));
	return 0;
}