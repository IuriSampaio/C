#include <stdio.h>
#include <stdlib.h>

void main(){
    // PARA ISSO É MELHOR USAR C++

    // Criando um array de 100 caracteres, cada um com uma letra, numero ou simbolo
    char palavra[100];
    printf("Digite seu nome: ");

    // Limpando o buffer para receber a entrada de um array de caracteres
    setbuf(stdin,0);

    // Recebe a palavra que seja digitada pelo usuario
    fgets(palavra , 100 , stdin);

    // colocando na posição que acaba a palavra o caractere que estaria se fosse o fim do array
    palavra[strlen(palavra) - 1 ] = '\0';
    printf("\neae %s, ta de boa?",palavra);



    system("pause");
}
