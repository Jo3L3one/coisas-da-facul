#include <stdio.h>

int main() {

    char idade = -127;
    unsigned char idade_positiva = 255; // 0 a 255

    int populacao = 4000000000; // -2b a 2b
    unsigned populacao_india = 3000000000; // 0 a 4b

    short int inteiro_2bytes = 32000; // -32k a 32k
    unsigned short int inteiro_2bytes_positivo = 64000; // 0 a 64k
    long int inteiro_8bytes = 9000000000000000000L; // 18 0s
    unsigned long int inteiro_8bytes_positivo = 9000000000L; // 0 a 9 0s
    
    long double duplo_16bytes = 987987987987987987987987897.987987987987879877987897987L; // é MUITO número


    return 0;
}