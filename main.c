#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lettre = 'R';                      //lettre R
    float chiffre = 3.50;                   // chiffre avec un dixieme
    float resultat = lettre + chiffre;
    printf("Résultat : %02f\n", resultat);  // 'R' résultat converti en son code ascii
    return 0;
}