#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10];
    int valorProcurado, posEncontrada = -1, comparacoes = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite o valor que deseja pesquisar: ");
    scanf("%d", &valorProcurado);

    for (int i = 0; i < 10; i++) {
        comparacoes++;
        if (vetor[i] == valorProcurado) {
            posEncontrada = i;
            break; 
        }
    }

    if (posEncontrada != -1) {
        printf("\nValor encontrado na posicao %d.\n", posEncontrada);
    } else {
        printf("\nValor nao encontrado no vetor.\n");
    }
    printf("Total de comparacoes realizadas: %d\n", comparacoes);

    return 0;
}