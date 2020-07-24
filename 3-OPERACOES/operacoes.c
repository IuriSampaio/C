#include <stdio.h>
#include <stdlib.h>

void main(){

    printf("====== OPERACOES NO C =======");

     // definindo as 2 ao mesmo tempo
    int e = 4, w = 3;

    ////SOMA
    printf("\n-->A soma de: %d + %d =  %d \n",e,w, e+w);
    ////SUBTRACAO
    printf("-->A subtracao de: %d - %d = %d\n",w,e, w-e);
    ////MULTIPLICACAO
    printf("-->A multiplicacao de: %d * %d = %d\n",w,e, e*w);
    ////DIVISAO
    printf("-->A divisao de: %d / %d = %d\n", e/w);
    ////RESTO DA DIVISAO OU MODULO
    printf("-->A divisao de: %d / %d = %d\n", e%w);
    ////ABSOLUTO
    printf("-->O valor absoluto de -5 = %d\n",abs(-5) );

    system("pause");
}
