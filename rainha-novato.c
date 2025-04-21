#include <stdio.h>

int main() {
    int i = 0;
    int casas;

    printf("Quantas casas voce quer mover para a esquerda?\n");
    scanf("%d", &casas);

    while (i < casas) {
        printf("Esquerda\n");
        i++;
    }

    return 0;
}
