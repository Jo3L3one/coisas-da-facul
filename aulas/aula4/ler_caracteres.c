#include <stdio.h>

int main () {

    char tecla;
    printf("pressione uma tecla e depois enter: ");
    scanf("%c", &tecla); // tecla = 'a';
    getchar(); // ler o /n da leitura anterior (agr dá certo omagah[se por acaso vc ver isso {oq eu duvido} e não lembrar oq o getchar faz, comenta ele aí e roda dnv dps se foda])
    
    printf("vc apertou: %c\n", tecla);
    
    printf("pressione outra tecla e depois enter: ");
    scanf("%c", &tecla); // tecla = 'a';
    getchar();

    printf("vc apertou: %c\n", tecla);

    char nome [31];
    printf("entre com seu nome: ");
    scanf("%s", nome);
    printf("vc digitou: %s\n", nome);

    return 0;
}