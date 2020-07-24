#include <stdio.h>
#include <stdlib.h>

void main(){

    int  n = 1;

    while (n == 1){
        int op;
        printf("--QUAL EXEMPLO DE LACO VC DESEJA EXECUTAR--\n");
        printf("-- 1 => WHILE --\n");
        printf("-- 2 => DO - WHILE --\n");
        printf("-- 3 => FOR --\n");

        printf("Qual vc escolhe?");
        scanf("%d", &op);

        switch (op){

        case 1:
            printf("===Exemplos do uso do laco while===\n");

            printf("\n==============exemplo1=================\n");

            int idade;
            printf("Digite sua idade:\n");
            scanf("%d",&idade);

            int cont = 0;

            while (cont <= idade){
                printf("Feliz aniversario de %d anos\n",cont);
                cont ++; // ou cont = cont + 1;
            }

            printf("\n==============exemplo2=================\n");

            int tabuadaDo;
            printf("Quer ver a tabuada de qual numero?");
            scanf("%d",&tabuadaDo);

            cont = 0;
            printf("\n______Tabuda do %d_______\n",tabuadaDo);
            while (cont <= 10){
                printf("%d * %d = %d\n", tabuadaDo, cont , tabuadaDo*cont );
                cont++;
            }
            break;

        case 2:
            printf("===Exemplos do uso do laco do - while===\n");

            printf("___Tabuada de todos os numeros___");
            cont = 0;

            do{
                int cont2 = 0;
                printf("===Tabuada do %d====\n",cont);

                do{
                    printf(" %d * %d = %d \n",cont,cont2,cont * cont2 );
                    cont2++;
                }while (cont2 <= 10);

                cont++;

            }while(cont <= 10);
            break;

        case 3:
            printf("===Exemplos do uso do laco for===\n");

            printf("\n==============exemplo1=================\n");

            for (int contadpr = 100; contadpr > 10; contadpr--){
                printf("NUMERO: %d \n",contadpr);
            }

            printf("\n==============exemplo2=================\n");

            int l;

            printf("digite um numero para dividir ele e todos os intecessores por 2: ");
            scanf("%d",&l);

            for (int k=0 ; k < l ; k++){
                printf("%d / 2 = %d\n",k,k/2);
            }
        break;

        default:
            printf("\nOPCAO INVALIDA\n");


        }

            char continuar;

            fflush(stdin);

            printf("Deseja continuar S/N\n");
            scanf("%c",&continuar);

            if (continuar == 'N' || continuar == 'n'){
                printf("PARAR\n");
                n--;
                break;
            }else{
                printf("CONTINUAR\n");
                continue;
            }
    }

}
