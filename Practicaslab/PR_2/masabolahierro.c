/*
** Descripción: Calculo Masa bola de hierro
** Asunto: secuencial, ejemplo completo 
*/

#include <stdio.h>

#define PI 3.1415
#define densidad 0.00786 /* Kg/cm3                   */

int main()
{
  char c;
  float diametro; /* diametro de la esfera    */
  float radio;    /* radio de la esfera (cm)  */
  float volumen;  /* volumen de la esfera     */
  float masa;     /* masa en kg               */

  do
  {
    //system("cls||clear");
    printf("CALCULO DE LA MASA DE UNA BOLA DE HIERRO\n");
    printf("========================================\n\n");
    printf("Introduzca el diametro (cm): ");
    scanf(" %f", &diametro);
    radio = diametro / 2;
    volumen = 4 * PI * radio * radio * radio / 3;
    masa = densidad * volumen;
    printf("\nMasa: %.2f Kg", masa);
    printf("\nDesea efectuar una nueva operacion (S/N)? ");
    scanf(" %c", &c);
  } while ((c != 'N') && (c != 'n'));
  return 0;
}