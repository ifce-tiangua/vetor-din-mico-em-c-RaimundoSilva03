
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam;
    int *vet = (int*)malloc(tam*sizeof(int));
    scanf("%d", &tam);
    if(vet==NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    for(int i = 0; i < tam; i++) {
        scanf("%d", &vet[i]);
    }
    printf("[");
    for(int i = 0; i < tam; i++) {
        printf("%d", vet[i]);
        if(i<tam-1)
        printf(",");
    }
    printf("]");
    return 0;
}
