#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main () {
    int *v, n;
    unsigned long int ini, fim;

    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &n);

    //BUBBLE
    v = (int *) malloc (n * sizeof(int));

    srand(time(0));
    gera_vetor(v,n);

    ini = time(0);
    bubble(v,n);
    fim = time(0);

    system("cls");

    printf("\nOrdenacao do vetor de tamanho %d com Bubble\nTempo de execucao: %ld segundos", n, fim-ini);

    free(v);

    fim=0;
    ini=0;

    //INSERTION
    v = (int *) malloc (n * sizeof(int));

    srand(time(0));
    gera_vetor(v,n);

    ini = time(0);
    insertion(v,n);
    fim = time(0);

    printf("\n\nOrdenacao do vetor de tamanho %d com Insertion\nTempo de execucao: %ld segundos\n", n, fim-ini);

    free(v);

    return 0;
}