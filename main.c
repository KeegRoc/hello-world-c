#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nombre = 0;
   printf("Entrer un nombre supérieur à 10 :");
   scanf("%d", &nombre);

   while (nombre <= 10){
    printf("Essayer encore : ");
    scanf("%d", &nombre);
   }
   printf("Bravo, vous avez entré : %d\n", nombre);
    return 0;
}