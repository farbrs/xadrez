#include <stdio.h>

int main () {

    int i = 0;
    int casas;

    printf("Digite quantas casas voce quer que o bispo se mova na diagonal...\n");
    scanf("%d", &casas);

    do {
        printf("Movendo bispo... ");
        printf("diagonal ⬈\n");
        i++;  
    } while (i < casas);    

    return 0;
}