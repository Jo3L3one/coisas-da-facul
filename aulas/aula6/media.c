#include <stdio.h>

int main () {
    float nota_a1 = 0.0f;
    float nota_a2 = 0.0f;
    int leu_certo =0;

    printf("Entre com a nota A1: ");
    leu_certo = scanf("%f", &nota_a1);
    getchar();

    if (nota_a1 < 0.0f || nota_a1 > 10.0f || !leu_certo) {
        printf("A nota deve ser entre 0.0 e 10.0.\n");
        return 0;
    }

    printf("Entre com a nota A2: ");
    leu_certo = scanf("%f", &nota_a2);
    getchar();

    if (nota_a2 < 0.0f || nota_a2 > 10.0f) {
        printf("A nota deve ser entre 0.0 e 10.0.\n");
        return 0;
    }

    float media = 0.4f * nota_a1 + 0.6f * nota_a2;
    
    if (9.0f <= media && media <= 10.0f) {
        printf("A media eh %.1f e a mencao ss.\n", media);
    } else if (7.0  <= media && media <= 8.9f) {
        printf("A media eh %.1f e a mencao MS.\n", media);
    } else if (5.0  <= media && media <= 6.9f) {
        printf("A media eh %.1f e a mencao MM.\n", media);
    } else if (3.0  <= media && media <= 4.9f) {
        printf("A media eh %.1f e a mencao MI.\n", media);
    } else if (0.1  <= media && media <= 2.9f) {
        printf("A media eh %.1f e a mencao II.\n", media);
    } else {
        printf("A media eh %.1f e a mencao SR.\n", media);
    }


    return 0;

}