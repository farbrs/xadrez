#include <stdio.h>


void moverTorre(int casas){
    if (casas > 0) {
        printf("Movendo Torre...\n");
        printf("Direita -->\n");
        moverTorre(casas -1);
    }
}

void moverBispo(int casas){
    if (casas > 0) {
        printf("Movendo Bispo...\n");
        printf("Diagonal ⬈\n");
        moverBispo(casas -1);
    }
}

void moverRainha(int casas){
    if (casas > 0){
        printf("Movendo Rainha...\n");
        printf("Esquerda <--\n");
        moverRainha(casas -1);
    }
}

void moverCavalo(int casas){
    printf("Movendo Cavalo...\n");
    if (casas > 0){       
        for (int i = 0; i < 2; i++){
            printf("Cima\n"); //imprime cima duas vezes
        }
        printf("Direita\n"); //Imprime direita uma vez
    }

    }


int main() {
    moverTorre(5);
    moverBispo(5);
    moverRainha(8);
    moverCavalo(1);
    return 0;
}