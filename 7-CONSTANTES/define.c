#include <stdio.h>
#include <stdlib.h>

/// DEFININDO UMA CONSTANTE

// #define nomeConstante conteudoConstante
#define TAMANHO 10

void main(){

    // CHAMANDO A CONSTANTE
    printf("%d\n", TAMANHO);
    // USANDO CONSTANTE NO CODIGO
    for (int i = 1; i<TAMANHO; i++){
        printf("%d\n",i);
    }
}
