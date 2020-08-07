#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // importando biblioteca que diexa colocar acento
#include <inttypes.h>
// sempre tem que ter um caractere a mais por conta do \0
struct Pessoa{
    char    nome[52];
    char    rg[14];
    int idade;
};

void main(){
    setlocale(LC_ALL,""); // serve para poder colocar acento
    printf("olá MUNDO Ç PÁ CARAI PQ NOIS É BR \n");
    //////////////// INT //////////////////////

    // declarando variaveis inteiras
    int n = 5;
    int k;
    printf("\n\n\n\nUSANDO INT\n");
    printf("default de n = %d \n", n);

    // lendo valor digitado pelo usuario
    printf("Digite um novo valor para n: ");
    scanf("%d", &n); // vai escanear oque for digitado para novo valor para n

    printf("Digite um valor para ser somado a n: ");
    scanf("%d",&k);

    // mostrando a soma
    printf("%d + " ,n);
    printf("%d = ",k);
    printf("%d \n",n+k);

    //////////////// FLOAT //////////////////////

    // declarando variaveis decimais
     // aqui as variaveis decimais são declaradas com . mas no terminal, por conta do locale.h usa virgula (padrão br)
    float a = 12.2;
    float l;

    printf("\n\n\n\nUSANDO FLOAT\n");
    printf("a= %f",a);

    printf("\nDigite um valor decimal para ser subtraido: ");
    scanf("%f",&a);

    printf("\nDigite um valor para subtrair do anterior: ");
    scanf("%f \n",&l);

    printf("%f - ",a);
    printf("%f = ",l);
    printf("%f",a-l);

    ///////////////// DOUBLE ///////////////////////

    double num = 29.09;
    double num2 = 19.30;

    printf("\n\n\n\nUSANDO DOUBLE\n");
    printf("%d * %d = %d",num,num2,num*num2);

    ///////////////// CHAR /////////////////////////

    printf("\n\n\n\nUSANDO CHAR\n");

    fflush(stdin);//limpando o buffer para receber caracteres(letra)

    char letra = 'I';
    printf("%c",letra);

    printf("\nDeseja fazer isso s/n :");
    scanf("%c",&letra);

    /////////////// STRUCT //////////////////////////

    printf("\n\n\n\nUSANDO STRUCT\n");

    struct Pessoa p1 = {
        .nome  = "Iuri",
        .rg    = "52.968.554-01",
        .idade = 17,
    };

    printf("Nome  : %s\n", p1.nome);
    printf("RG    : %s\n", p1.rg);
    printf("Idade : %u\n", p1.idade);
}
