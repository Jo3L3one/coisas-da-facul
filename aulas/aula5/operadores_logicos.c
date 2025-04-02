#include <stdio.h>

int main() {

    // && operador E
    // || operador OU
    // ! operador NAO

    printf("Tabela da verdade\n");
    printf("0 E 0 = %i\n", 0 && 0); //aqui quem manda é o 0, oq isso significa? se tiver 0, vai retornar 0, anão ser q seja 1 e 1, aí retorna 1
    printf("0 E 1 = %i\n", 0 && 1);
    printf("1 E 0 = %i\n", 1 && 0);
    printf("1 E 1 = %i\n", 1 && 1);
    printf("\n");
    printf("0 OU 0 = %i\n", 0 || 0); //aq é o contrário do &&, literalmente
    printf("0 OU 1 = %i\n", 0 || 1);
    printf("1 OU 0 = %i\n", 1 || 0);
    printf("1 OU 1 = %i\n", 1 || 1);
    printf("\n");
    printf("NAO 0 = %i\n", !0); //contrário de 0 é 1 e vice versa
    printf("NAO 1 = %i\n", !1);

    return 0;
}