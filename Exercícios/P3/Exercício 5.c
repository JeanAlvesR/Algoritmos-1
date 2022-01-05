/* 5 – Construa um algoritmo computacional usando a linguagem de programação C que utilize
procedimento para calcular o fatorial (N!) e uma função para calcular o quadrado (N2) de um
número inteiro positivo (N) digitado pelo usuário.

a)Entrada e verificação: ela deve ser positiva.

b)Procedimento para calcular fatorial de N.
            OBS: Fatorial de 0 é 1 e de 1 é 1.

c)Função para calcular o quadrado de N.*/


//bibliotecas.
#include<stdio.h>
#include<locale.h>

//Procedimento para calcular o fatorial
void fatorial (int num)
{
    //Declaração de variáveis do procedimento
    int fatorial=1;
    //Fatorial de 0 é 1.
    if (num==0)
    {
        printf("\n\nO fatorial é: 1");
    }
    //Término do procedimento, se n > 0.
    else
    {
        for(fatorial =1; num>1; num--)
        {
            fatorial *= num;
        }
        printf("\n\nO fatorial é: %d",fatorial);
    }
}
//Função
int quadrado (int n)
{
    n=n*n;
    return n;
}

int main ()
{
    setlocale(LC_ALL,"Portuguese");
    //Declaração das variáveis.
    int n,multiplicacao;
    //entrada
    printf("Algoritmo que calcula o fatorial e o quadrado de um número inteiro positivo\n\n");
    printf("Inserir número: ");
    scanf(" %d",&n);
    //verificação
    while(n<0)
    {
        printf("Inserir número: ");
        scanf(" %d",&n);
    }
    //chamada do procedimento
    fatorial (n);
    //chamada da função e retornando o valor da função para dentro do espaço de memória da variável multiplicacao.
    multiplicacao = quadrado(n);
    //sáida do quadrado do número inserido.
    printf("\n\nO quadrado é: %d\n\n",multiplicacao);

    return 0;
}




