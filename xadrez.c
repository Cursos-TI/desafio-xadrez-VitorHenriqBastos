#include <stdio.h>

int main() {
    
    //Quantidade de casas de cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    //Movimento da Torre
    printf("Movimento da Torre: \n");
    for (int i = 1; i <= casasTorre; i++)
    {
        printf("Direita (%d)\n", i);
    }

    printf("\n");
    
    //Movimento do Bispo
    printf("Movimento do Bispo: \n");
    int i = 1;

    while (i <= casasBispo)
    {
        printf("Cima, Direita (%d)\n", i);
        i++;
    }
    
    printf("\n");

    //Movimento da Rainha
    printf("Movimento da Rainha: \n");
    int j = 1;

    do
    {
        printf("Esqueda (%d)\n", j);
        j++;
    } while (j <= casasRainha);
    

    return 0;
}
