#include <stdio.h>

int main() {
    float velocidade;

    printf("Qual velocidade voce costuma dirigir (km/h)? ");
    scanf("%f", &velocidade);

    if (velocidade > 75) {
        printf("Gravissima: Multa alta e suspensao da carteira!\n");
    } else {
        if (velocidade > 65) {
            printf("Grave: Multa alta e pontos na carteira!\n");
        } else {
            if (velocidade > 55) {
                printf("Media: Multa e pontos na carteira.\n");
            } else {
                if (velocidade > 45) {
                    printf("Leve: Apenas uma advertencia.\n");
                } else {
                    printf("Parabens! Voce dirige de forma segura.\n");
                }
            }
        }
    }

    return 0;
}
