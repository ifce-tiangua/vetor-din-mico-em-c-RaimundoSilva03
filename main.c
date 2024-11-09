#include <stdio.h>
#include <stdlib.h>

int main() {
    int tam;

    scanf("%d", &tam);
    
    // Verifica se o tamanho é zero e imprime uma saída 
    if (tam == 0) {
        printf("[vazio]\n");
        return 0;
    }
    
    // Aloca memória para o vetor
    int *vet = (int*)malloc(tam * sizeof(int));
    if (vet == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    
    // Leitura dos elementos do vetor
    for (int i = 0; i < tam; i++) {
        
        scanf("%d", &vet[i]);
    }

    // Imprime o vetor com o formato correto
    printf("[");
    for (int i = 0; i < tam; i++) {
        if (i > 0) {
            printf(", ");
        }
        printf("%d", vet[i]);
    }
    printf("]\n");
    
    // Libera a memória alocada
    free(vet);
    
    return 0;
}


