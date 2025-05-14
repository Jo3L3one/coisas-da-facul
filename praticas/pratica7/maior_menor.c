#include <stdio.h>

int main(){
 
    int numero;
    int maior;
    int menor;

    printf("insira numeros inteiros (digite 0 pra terminar): ");
    scanf("%i", &numero);

    maior = numero;
    menor = numero;

    while(numero != 0) {
        if(numero > maior) {
            maior = numero;
        }
        if(numero < menor) {
            menor = numero;
        }
        scanf("%i", &numero);
    }

    printf("o maior numero digitado foi: %i\no menor numero digitado foi: %i", maior, menor);


    return 0;
}