#include <stdio.h>

//Funções Recursivas
void moverTorre(int casas, int i) {
    if (i > casas) return; // condição de parada
    printf("Direita %d\n", i);
    moverTorre(casas, i + 1); 
}

void moverRainha(int casas, int i) {
    if (i > casas) return;
    printf("Esquerda %d\n", i);
    moverRainha(casas, i + 1);
}

//Bispo recursivo e loops aninhados
void moverBispo(int casas, int i) {
    if (i > casas) return;
    for (int j = 0; j < 1; j++) {   // loop vertical
        for (int k = 0; k < 1; k++) { // loop horizontal
            printf("Cima, Direita %d\n", i);
        }
    }
    moverBispo(casas, i + 1);
}

//Cavalo com loops aninhados
void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    for (int v = 1; v <= movimentosVerticais; v++) {
        if (v == 2) {
            printf("Cima (%d)\n", v);
            continue; 
        }
        printf("Cima (%d)\n", v);
    }

    for (int h = 1; h <= movimentosHorizontais; h++) {
        if (h > 1) break;  
        printf("Direita (%d)\n", h);
    }
}


int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("\nMovimento da Torre:\n");
    moverTorre(casasTorre, 1);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo, 1);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha, 1);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();
    
    //Quantidade de casas de cada peça
    //int casasTorre = 5;
    //int casasBispo = 5;
    //int casasRainha = 8;
    //int casasCavalo = 1;

    //Movimento da Torre
    /*printf("Movimento da Torre: \n");
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
    
    printf("\n");*/

    /*Movimento da Rainha
    printf("Movimento da Rainha: \n");
    int j = 1;

    do
    {
        printf("Esquerda (%d)\n", j);
        j++;
    } while (j <= casasRainha);

     printf("\n");*/

    //Movimento do Cavalo
    /*printf("Movimento do Cavalo: \n");
    int k = 0;
    while (k < casasCavalo)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");

        k++;
    }
    
    printf("\n");*/
    

    return 0;
}
