#include <stdio.h>
#include <stdlib.h>

int age = 3050;

int main()
{
   if (age < 13){                                                     
    printf("Enfant\n");
   } else if (age < 18){
    printf("Adolescent\n");
   } else {
    printf("Adult\n");
   }
    return 0;
}