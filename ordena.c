#include "ordena.h"

void gera_vetor (int *v, int n) {
    int i;
    for (i = 0; i<n; i++) {
        v[i] = rand();
    }
}

void bubble (int v[], int n) {
    int i, j, aux;
    for (i=1; i<n; i++) {
        for (j=0; j<n-i; j++) {
            if (v[j] > v[j+1]) {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

void insertion (int v[], int n){
    int i, j, chave;
    for (i = 1; i < n; i++){
        chave = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > chave){
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = chave;
    }
}