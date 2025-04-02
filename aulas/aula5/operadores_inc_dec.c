#include <stdio.h>

int main() {

    // ++ incremento de +1
    // -- decremento de -1

    int numero = 10;
    printf("pre-incremento = %i\n", ++numero);
    printf("pre-decremento = %i\n", --numero);
    printf("pos-incremento = %i\n", numero++);
    printf("pos-decremento = %i\n", numero--);


    return 0;
}