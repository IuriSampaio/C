#include <stdio.h>

typedef struct{
    char Nome[50];
    float Peso;
    int Idade;
    float Altura;
} Pessoa;

void ImprimePessoa(Pessoa P) {
  printf("\nNome: %sIdade: %d \nPeso: %f \nAltura: %f\n",P.Nome, P.Idade, P.Peso, P.Altura);
}

int pegaQtd(){
    int qtd;
    printf("Quantas pessoas vc quer cadastrar? ");
    scanf("%d",&qtd);

    return qtd;
}

double calcIMC(double peso, double altura){
    double imc = (altura*2)/peso;

    return imc;
}

int main(){
    int qtd = pegaQtd();

    Pessoa Povo[qtd];
    char idade[qtd],peso[qtd],altura[qtd];

    for (int i =0; i<qtd;i++){
        printf("\nPESSOA %d\n",i+1);

        char nomeN[50];
        printf("Digite seu nome :");
        setbuf(stdin,0);

        fgets(Povo[i].Nome , 50 , stdin);

        printf("Digite sua idade :");
        scanf("%d",&idade[i]);

        printf("Digite seu peso :");
        scanf("%f",&Povo[i].Peso );

        printf("Digite sua altura :");
        scanf("%f",&Povo[i].Altura);

        //printf("%f",idade[i]);
        Povo[i].Idade = idade[i];
    }

    printf("\n===Pessoas cadastradas===\n");

    for(int j = 0;j<qtd;j++){
        ImprimePessoa(Povo[j]);

        double imc = calcIMC(Povo[j].Peso,Povo[j].Altura);
        printf("seu imc : %d\n",imc);
    }

   return 0;
}
