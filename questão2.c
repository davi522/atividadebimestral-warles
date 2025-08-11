#include <stdio.h>

int main() {
    int qtd, i, num;
    int maior, contMaior = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &qtd);

    for (i = 1; i <= qtd; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num);

        if (i == 1) {  
            maior = num;
            contMaior = 1;
        } else if (num > maior) {  
            maior = num;
            contMaior = 1;
        } else if (num == maior) {  
            contMaior++;
        }
    }

    printf("\nO maior numero foi: %d\n", maior);
    printf("Ele foi lido %d vezes.\n", contMaior);

    return 0;
}
