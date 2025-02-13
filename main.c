#include <stdio.h>
#include <stdlib.h>

int jour = 3050;

int main()
{
   switch (jour){
        case 1:
            printf("Lundi\n");
            break;
        case 2:
            printf("Mardi\n");
            break;
        case 3:
            printf("Mercredi\n");
            break;
        default:
            printf("Jour invalide\n"); 
   }
    return 0;
}