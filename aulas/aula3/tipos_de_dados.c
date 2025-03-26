#include <stdio.h>

int main() {

    // char 'A', 'a' (isso aq é pra caracteres)
    // int -125, 0, 125654 (isso pra números inteiros)
    // float -9.125654f, 0.0f, 0.66665f (pra números quebrados que terminam com o f)
    // double -9.23857439843729, 5.0123456789 (pra números quebrados q não terminam com o f)
    // void (sem tipo)

    printf("O tipo 'char' ocupa %i bytes e vai de %i a %i\n", sizeof(char), -128, 127);
    printf("O tipo 'int' ocupa %i bytes e vai de %i a %i\n", sizeof(int), -217483648, 217483647);
    printf("O tipo 'float' ocupa %i bytes e vai de %i a %i\n", sizeof(float), -3.E+38, 3.4E+38);
    printf("O tipo 'float' ocupa %i bytes e vai de %f a %f\n", sizeof(float), -3.E+38, 3.4E+38);
    printf("O tipo 'float' ocupa %i bytes e vai de %E a %E\n", sizeof(float), -3.E+38, 3.4E+38);
    printf("O tipo 'double' ocupa %i bytes e vai de %i a %i\n", sizeof(double), -1.8E+308, 1.8E+308);
    printf("O tipo 'double' ocupa %i bytes e vai de %E a %E\n", sizeof(double), -1.8E+308, 1.8E+308);
    printf("O tipo 'double' ocupa %i bytes e vai de %LE a %LE\n", sizeof(double), -1.8E+308, 1.8E+308);
    printf("O tipo 'void' ocupa %i bytes\n", sizeof(void));


    return 0;
}