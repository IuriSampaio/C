#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
///Retornando um numero aleatório
    //alimenta o rand de formas diferentes a cada compilação
    srand((unsigned)time(NULL));
    // recebe o texto da divisão do numero por 3
    int aleatorio = rand();
    // recebe um valor aleatorio entre 0 e 2
    int aleatorio2 = rand() %3;

    printf("%d",aleatorio);

    system("pause");
}
