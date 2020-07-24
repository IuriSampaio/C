#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// definindo o Tamanho do vetor como contante
#define TAMANHO 9
#define TAM 3
// definindo constante para o numero de linhas e colunos da matriz
#define NUM_L 5
#define NUM_C 4

void main(){

    /// VETORES

    int i;
    //CRIANDO UM VETOR E PASSANDO SEU TAMANHO
 //tipoVal nomeVetor[tamanho]
    int vetor[TAMANHO], vet[TAM];

//////////////// LIKE A CHIELD ///////////////
    // adicionando valores ao array
    vet[0]=29;
    vet[1]=89;
    vet[2]=38;

    printf("Valores adicionados manualmente ao vetor: %d, %d, %d\n\n",vet[0],vet[1],vet[2]);

//////////////// LIKE A FUNKING AMAZING LEGEND ////////////////////
    // ADICIONANDO O QUADRADO DO INDICIE DA POISÇÃO A CADA POSIÇÃO
    for( i=0 ; i<9; i++ ){

        vetor[i]=i*i;

    }
    // MOSTRANDO O ARRAY
    printf("Adicionando valores dinamicamente a um vetor: ");
    for( i=0 ; i<9 ; i++ ){

        if(i==0){

            printf("%d",vetor[i]);

        }else if(i == 8){

            printf(", %d\n",vetor[i]);

        }else{

            printf(", %d",vetor[i]);

        }

    }

    /// MATRIZES
    int linha, coluna;
    //criando uma matriz
    float notas[NUM_L][NUM_C] = {{ 7.5, 6.8, 9.6, 6.7 },
                                { 6.5, 6.3, 8.4, 7.6 },
                                { 5.7, 8.6, 9.0, 4.5 },
                                { 4.5, 5.8, 6.8, 7.0 },
                                { 3.6, 7.6, 8.1, 6.5 } };

    printf("Exibindo o conteudo da matriz declarada e inicializada:\n\n");

    for (linha = 0; linha < NUM_L; linha++) {

        for (coluna = 0; coluna < NUM_C; coluna++) {
            // percorrendo e mostrando todos os elementos da matriz
            printf("%5.1f", notas[linha][coluna]);

        }

        printf("\n");
    }

}
