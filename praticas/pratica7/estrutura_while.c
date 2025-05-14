#include <stdio.h>

int main() {

    int nota;
    scanf("%i", &nota);
    while ( nota < 1 || nota > 10) {
        printf("nota invalida! Tente novamente.\n");
        scanf("%i", &nota);
    }

    printf("nota valida");

    return 0;
}