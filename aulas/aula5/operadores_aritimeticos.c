#include <stdio.h>

int main() {

    // + soma
    // - subtração
    // * multiplicação
    // / divisão
    // % resto da divisão
    
    int numero1 = 10;
    int numero2 = 20;
    int soma = numero1 + numero2;
    printf("A soma de %i e %i = %i\n", numero1, numero2, soma);

    int subtracao = numero1 - numero2;
    printf("A subtracao de %i e %i = %i\n", numero1, numero2, subtracao);
    
    int multi = numero1 * numero2;
    printf("A subtracao de %i e %i = %i\n", numero1, numero2, multi);
    
    int div = numero1 / numero2; //se der número quebrado, tem q ser float pq int é inteiro
    printf("A divisao de %i e %i = %i\n", numero1, numero2, div);
    
    {
        float div = numero1 * 1.0f / numero2; //aí só multiplicar um dos números por 1.0f e depois continuar a operação normalmente, lembra de por o resultado como float tb
        printf("A divisao de %i e %i = %.1f\n", numero1, numero2, div);
    }

    int resto = numero1 % numero2;
    printf("O resto de %i e %i = %i\n", numero1, numero2, resto);

    int operacao = 1.0f * 1 * 2 / 3 + 4 - 2 * 1;
    printf("%.1f\n", operacao);
 
    {
        int operacao = 1 * 2 / 3 + 4 - 2 * 1;
        printf("%i\n", operacao);
    }

    return 0;
}