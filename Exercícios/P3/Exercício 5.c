/* 5 � Construa um algoritmo computacional usando a linguagem de programa��o C que utilize
procedimento para calcular o fatorial (N!) e uma fun��o para calcular o quadrado (N2) de um
n�mero inteiro positivo (N) digitado pelo usu�rio.

a)Entrada e verifica��o: ela deve ser positiva.

b)Procedimento para calcular fatorial de N.
            OBS: Fatorial de 0 � 1 e de 1 � 1.

c)Fun��o para calcular o quadrado de N.*/


//bibliotecas.
#include<stdio.h>
#include<locale.h>

//Procedimento para calcular o fatorial
void fatorial (int num)
{
    //Declara��o de vari�veis do procedimento
    int fatorial=1;
    //Fatorial de 0 � 1.
    if (num==0)
    {
        printf("\n\nO fatorial �: 1");
    }
    //T�rmino do procedimento, se n > 0.
    else
    {
        for(fatorial =1; num>1; num--)
        {
            fatorial *= num;
        }
        printf("\n\nO fatorial �: %d",fatorial);
    }
}
//Fun��o
int quadrado (int n)
{
    n=n*n;
    return n;
}

int main ()
{
    setlocale(LC_ALL,"Portuguese");
    //Declara��o das vari�veis.
    int n,multiplicacao;
    //entrada
    printf("Algoritmo que calcula o fatorial e o quadrado de um n�mero inteiro positivo\n\n");
    printf("Inserir n�mero: ");
    scanf(" %d",&n);
    //verifica��o
    while(n<0)
    {
        printf("Inserir n�mero: ");
        scanf(" %d",&n);
    }
    //chamada do procedimento
    fatorial (n);
    //chamada da fun��o e retornando o valor da fun��o para dentro do espa�o de mem�ria da vari�vel multiplicacao.
    multiplicacao = quadrado(n);
    //s�ida do quadrado do n�mero inserido.
    printf("\n\nO quadrado �: %d\n\n",multiplicacao);

    return 0;
}




