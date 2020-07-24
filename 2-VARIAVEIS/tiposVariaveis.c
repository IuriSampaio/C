#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // importando biblioteca que diexa colocar acento

void main(){
    setlocale(LC_ALL,""); // serve para poder colocar acento
    printf("olá MUNDO Ç PÁ CARAI PQ NOIS É BR \n");
    //////////////// INT //////////////////////

    // declarando variaveis inteiras
    int n = 5;
    int k;
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
    printf("a= %f",a);

    printf("\nDigite um valor decimal para ser subtraido: ");
    scanf("%f",&a);

    printf("\nDigite um valor para subtrair do anterior: ");
    scanf("%f \n",&l);

    printf("%f - ",a);
    printf("%f = ",l);
    printf("%f",a-l);

    ///////////////// CHAR /////////////////////////

    fflush(stdin);//limpando o buffer para receber caracteres(letra)

    char letra = 'I';
    printf("\n%c",letra);

    printf("\nDeseja fazer isso s/n :\n\n\n");
    scanf("%c",letra);

}
