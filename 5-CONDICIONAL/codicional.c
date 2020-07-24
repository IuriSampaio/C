#include <stdio.h>
#include <stdlib.h>

void main(){
//////////////// IF - ELSE ////////////////

///CONDICIONAL SIMPLES
printf("ATINJA 2.5 NA DIVISAO DAS VARIAVEIS\n");
    int val , val1;
    float res;

    printf("Digite o primeiro valor\n");
    scanf("%d",&val);

    printf("Digite o segundo valor\n");
    scanf("%d",&val1);

    res = val/val1;

    if ( res == 2.5){
        printf("PARABENS atingiu 2.5 ");
    }
///CONDICIONAL COMPOSTO

// verifica se é par ou impar
    int parImpar;

    printf("\nDigite um numero para verificar se e par ou impar: ");
    scanf("%d",&parImpar);

    if (parImpar%2 == 0){
        printf("%d E PAR\n",parImpar);
    }else{
        printf("%d E IMPAR\n",parImpar);
    }

//continuar?
    char continuar;

    fflush(stdin);

    printf("Deseja continuar S/N\n");
    scanf("%c",&continuar);

    if (continuar == 'N' || continuar == 'n'){
        printf("PARAR\n");
    }else{
        printf("CONTINUAR\n");
    }


///CONDICIONAL ENCADEADO

// verifica se é maior ou menor de idade
    int idade;

    printf("digite sua idade: ");
    scanf("%d",&idade);

    if(idade < 130 && idade > 0){

        if (idade < 18){
            printf("MENOR DE IDADE\n");
        }else if (idade >= 18 && idade <60){
            printf("MAIOR DE IDADE\n");
        }else{
            printf("APROVEITE A MELHOR IDADE\n");
        }

    }else{
        printf("VOCÊ NÃO TEM ESSA IDADE");
    }

// exemplos da diferenca entre if e swicth no C
    int op=1;

    if (op == 1){
        printf("opcao 1");
    }else if(op ==2){
        printf("opcao 2");
    }else if(op ==3){
        printf("opcao 3");
    }else if(op ==4){
        printf("opcao 4");
    }else{
        printf("opcao n cadastrada");
    }

/////////////// SWITCH - CASE ///////////////////


    switch(op){
        case 1:
            printf("opcao 1 do menu\n");
            break;
        case 2:
            printf("opcao 2 do menu\n");
            break;
        case 3:
            printf("opcao 3 do menu\n");
            break;
        case 4:
            printf("opcao 4 do menu\n");
            break;
        default:
            printf("opcao nao cadastrada\n");
            break;
    }

    switch(continuar){
        case 's':
            printf("CONTINUANDO");
            break;
        case 'S':
            printf("CONTINUANDO");
            break;
        case 'N':
            printf("PARANDO");
            break;
        case 'n':
            printf("PARANDO");
            break;
        default:
            printf("opção não cadastrada");
            break;
    }

}
