#include <stdio.h>

int main() {

    int idade = 0;

    printf("informe sua idade: ");
    scanf("%i", &idade);

    if(idade < 16) {
        printf("vc nem pode votar, seja feliz");
    } else {
        if (idade >= 18 && idade <= 70) {
            printf("vc tem q votar, msm se nao quiser");
        } else {
            printf(" vc ate pode votar, so se quiser");
        }
    
    }





    return 0;
}