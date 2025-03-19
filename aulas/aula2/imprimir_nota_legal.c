#include <stdio.h>

int main() {
    printf("-----------------------------------\n");
    printf("      N O T A     L E G A L     \n");
    printf("-----------------------------------\n");
    printf("    item         qde    prc   valor\n");
    printf("%-15s %3i %7.2f %7.2f\n", "Caneta Azul   ", 2, 2.0, 4.0);
    printf("%-15s %3i %7.2f %7.2f\n", "borracha  ", 1, 5.0, 5.0);
    printf("%-15s %3i %7.2f %7.2f\n", "resma de papel", 1, 12.0, 12.0);
    printf("-----------------------------------\n");
    printf("TOTAL.............:R$ 10b e 4,00\n");

    return 0;
}
