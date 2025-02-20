#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix;
    do{
        printf("Menu :\n");
        printf("1. Option 1 \n");
        printf("2. Option 2 \n");
        printf("3. Quitter\n");
        printf("Votre choix\n");
        scanf("%d", &choix);
    } while (choix != 3);

    printf("Au revoir !\n");
    return 0;
    
}