#include <stdio.h>
int main() {

    int n, anterior, proximo;
    anterior = 0;
    proximo = 1;

    printf("insira quantas casas de fibonacci vc quer que sejam geradas: ");
    scanf("%i", &n);
    for(int i=0; i<n; i++) {
        printf("%i, ", proximo);
        int auxiliar = proximo;
        proximo = anterior + proximo;
        anterior = auxiliar;
    }


    return 0;
}