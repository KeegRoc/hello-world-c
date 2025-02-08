#include <stdio.h>
#include <stdlib.h>

int main()
{

    char lettre = 'R';      // fait imprimer qu'une lettre seulement
    int nombre = 3050;      // fait imprimer n'importe quel entier 
    float pi = 123456789.50;        // fait imprimer n'importe quel nombre avec (deux) chiffre precis apres la virgule 
    double grandnombre = 9.87654321;        // fait imprimer n'importe quel nombre avec (plusieurs) chiffre precis apres la virgule
    printf("Lettre : %c, Nombre : %d, Pi : %.2f, Grand Nombre : %.8f\n", lettre, nombre, pi, grandnombre);
    return 0;
}