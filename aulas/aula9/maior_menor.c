#include <stdio.h>

int main(){
    //int numero1;
    //int numero2;
    //int numero3;
    //int numero4;
    //int numero5;
    //int numero6;
    //int numero7;
    //int numero8;
    //int numero9;
    //int numero10;
                                                            // 0 1 2 3 4 5 6 7 8 9
    int numeros[10]; //matriz unidimensional = vetor = array = | | | | | | | | | |

    //como acessa cada posição
    /*numeros[0] = 5;
    numeros[1] = -1;
    numeros[2] = 10;
    numeros[3] = 6;
    numeros[4] = -5;
    numeros[5] = -7;
    numeros[6] = 7;
    numeros[7] = 11;
    numeros[8] = 2;
    numeros[9] = 0;*/

    int maior = -9999;
    int menor = 9999;

    printf("entre com 10 numeros inteiros\n");
    for(int i=0; i<10; i++) {
        printf("numero %i: ",i+1);
        scanf("%i", &numeros[1]);

        if(maior<numeros[i]){
            maior = numeros[i];
        }

        if(menor>numeros[1]){
            menor = numeros[i];
        }

    }
    
    printf("seus numeros foram: ");
    for(int i=0; i<10; i++) {
        printf("%i, ", numeros[i]);
    }
    
    printf("o maior numero foi %i e o menor numero foi %i\n", maior, menor);



    return 0;
}