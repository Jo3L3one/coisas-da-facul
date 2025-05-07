#include <stdio.h>

int main() {
    char operacao;
    float numero1, numero2;
   
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);
   
    printf("Digite dois numeros (separados por espaco): ");
    scanf("%f %f", &numero1, &numero2);
   
    switch(operacao) {
        case '+':
            printf("Resultado: %.2f\n", numero1 + numero2);
            break;
        case '-':
            printf("Resultado: %.2f\n", numero1 - numero2);
            break;
        case '*':
            printf("Resultado: %.2f\n", numero1 * numero2);
            break;
        case '/':
            if (numero2 != 0) {
                printf("Resultado: %.2f\n", numero1 / numero2);
            } else {
                printf("Erro: divisao por zero!\n");
            }
            break;
        default:
            printf("Operacao invalida!\n");
    }
   
    return 0;
}