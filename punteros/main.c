#include <stdio.h>

int main(int argc, char *argv[])
{

    float *puntero1; // para declarar el puntero simpre usar el  "*"
    float a = 30; //asignamos valor al puntero (asignacion de valor a la variable "a") 

    puntero1 = &a; // apuntamos el puntero a la variable "a" 

    printf("el valor de la viable a es: %f\n", a); // el valor es el mismo 
    printf("la ubicacion en memoria de la variable es: %p\n", &a); // muestra la ubicacion de memoria

    *puntero1 = 40; // el asterisco te da el contenido

    printf("el contenido del puntero es: %f\n", *puntero1); //el valor del puntero cambia a 40
    printf("la ubicacion de memoria la cual apunta el puntero es: %p\n", puntero1); // muestra la ubicacion del contenido de memoria 

    printf("el nuevo valor de la viable a es: %f\n", a); // muestra la variable

    return 0;
}