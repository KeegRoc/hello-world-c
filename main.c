#include <stdio.h>
#include <stdlib.h>

char operateur = '/';
int a = 10;
int b = 5;

int main()
{
   switch (operateur){
        case '+':
        printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
        printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
        printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0){
            printf("%d / %d = %d\n", a, b, a / b);
        }else {
            printf("Division interdite!\n");
        }
            break;
        default:
            printf("Jour invalide\n"); 
   }
    return 0;
}