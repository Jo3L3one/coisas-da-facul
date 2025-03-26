#include <stdio.h>

int main() {

    char tecla; //isso aq é uma variável omagah
    int numero; //outra
    float moeda; //n preciso mais dizer q é outra variável né? a diferença é o tipo delas q vc deve saber
    double dizima;

    tecla = 'd';
    printf("tecla = %i\n", tecla);
    printf("tecla = %c\n", tecla);

    numero = 4562;
    printf("valor do numero = %i\n", numero);

    moeda = 52.13f;
    printf("valor da moeda = %.2f\n", moeda);

    dizima = 1.123456789;
    printf("valor da dizima = %.10f\n", dizima);
    dizima - 2.33333333; // o valor da variável mudou, pq? pq vc usou a mesma variável pra setar duas coisas diferentes!!!
    printf("valor da dizima = %.10f\n", dizima);


    return 0;
}