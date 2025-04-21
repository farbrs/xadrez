#include <stdio.h>

int main(){

    int movimentoCompleto = 1; //flag p controlar o movimento em 'L'

    while (movimentoCompleto--)
    {
        for (int i = 0; i < 2; i++){
            printf("Cima\n"); //imprime cima duas vezes
        }
        printf("Direita\n"); //Imprime direita uma vez
    }

    return 0;
}