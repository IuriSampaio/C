#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
///Retornando um numero aleat�rio
    //alimenta o rand de formas diferentes a cada compila��o
    srand((unsigned)time(NULL));
    // recebe o texto da divis�o do numero por 3
    int aleatorio = rand();
    // recebe um valor aleatorio entre 0 e 2
    int aleatorio2 = rand() %3;

    printf("%d",aleatorio);

    system("pause");
}
