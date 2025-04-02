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

    int inteiro = 10; // isso chama escopo global
    printf("%i\n", inteiro);

    //pra criar uma variável nova, faz assim:
    {
        int inteiro = 20; //isso se chama escopo
        printf("%i\n", inteiro); //assim, qnd vc abre uma chave e declara uma variável, ela fica declarada desse jeito enquanto a chave tiver aberta, qnd fechar, morre na memória e volta pra variável antiga
    }


    return 0;
}