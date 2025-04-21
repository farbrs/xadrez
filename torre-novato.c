// mover a torre 5 casas pra direita

#include <stdio.h>

int main(){

    int numero, i;

    printf("Digite quantas casas voce quer que a torre se mova...\n");
    scanf("%d", &numero);

    for(i = 0; i < numero; i++){
        printf("Direita ->\n"); // imprime a direção do movimento
    }


    return 0;
}