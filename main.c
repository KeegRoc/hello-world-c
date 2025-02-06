#include <stdio.h>  // directive pour inclure la bibliotheque standard

// Declaration d'une fonction supplementaire
void saluer(void){
    printf("Bonjour, monde !\n");    
}

// Fonction principale
int main() {
    printf("Début du programme\n");
    saluer();   // Appel de la fonction
    return 0;   // Fin normale du programme
}