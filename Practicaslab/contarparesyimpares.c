#include <stdio.h>
int main (){
int pares = 0;       // Variable para contar  los números pares 
int nones = 0;       // Variable para contar  los números pares
int numero;         // Variable para almacenar cada número introducido por el usuario

for (int contador = 0; contador < 10; contador++)

   
{
    printf("Introduce un número entero: ");
    scanf("%d", &numero);
    if(numero%2==0)
    {
        pares++;
    } else {
        nones++;
    }
    
}

printf("Hay %d pares y %d nones  \n", pares, nones);}