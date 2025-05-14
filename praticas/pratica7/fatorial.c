#include <stdio.h>

int main(){

    int numero;
    int fatorial = 1;

    printf("insira um numero: ");
    scanf("%i", &numero);
    for (int i=numero; i>0; i--) {

        fatorial = fatorial * i;
    }

    printf("o fatorial de %i e %i", numero, fatorial);


    return 0;
}