#include <stdio.h>

int main(){

    int numero;

    printf("insira um numero: ");
    scanf("%i", &numero);

    printf("multiplos de %i entre 1 e 100:\n", numero);
    for (int i=1; i<100; i++) {
        if(numero % i == 0) {
            printf("%i ", i);
        }
    }


    return 0;
}