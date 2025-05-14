#include <stdio.h>
int main(){
    //esse código ainda tá errado, arruma dps c descobrir como tmj

    int numero;

    printf("insira um numero: ");
    scanf("%i", &numero);

    int decimal = numero;
    for(int i=128; i>0; i=i/2) {

        int bit = decimal % i;
        printf("%i", bit);
        decimal = decimal - bit * i;
    }

    return 0;
}