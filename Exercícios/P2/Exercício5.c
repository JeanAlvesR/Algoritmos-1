/*5 – Construa um algoritmo computacional em linguagem de programação C que receba um
número inteiro positivo que é um quadrado perfeito e utilize uma função para calcular a raiz
quadrada. Utilize uma função para verificar se o número digitado pelo usuário é positivo. No
caso do número não ser positivo, solicitar o número novamente. O cálculo da raiz deve ser
realizado por meio da contagem de subtrações do número de entrada, usando como
subtraendos números inteiros ímpares, iniciando pelo número 1 e terminando quando o
resultado das sucessivas subtrações for 0, sendo que o resultado de uma subtração é o
minuendo da próxima subtração. Por exemplo, se o número digitado é 9, os subtraendos são 1,
3 e 5, a primeira operação é 9 – 1 = 8, a segunda operação é 8 – 3 = 5 e a terceira operação é 5
– 5 = 0; e três operações indicam o valor 3 para a raiz quadrada do número 9.

a) Entrada com número inteiro positivo.

b) checar se o número é positivo, se não for, pedir para o usuário entrar novamente.

c) Usar função para calcular a raiz quadrada.
            O calculo da raiz quadrada é feito através da retirada dos números impares em ordem descrecente e sempre aumentando mais 2.*/


#include<stdio.h>
#include<locale.h>


//função para calcular a raiz
int calculo_raiz(int numero)
{
    int raiz_quadrada=0,operador=1,i=1;
    //ciclo para retirar uma quantidade impar x vezes do número inserido.
    while(i)
    {
        numero = numero-operador;
        operador+=2;
            //se for igual a 0, isso significa que é um quadrado perfeito.
            if(numero == 0)
            {
                i=0;
            }
            //se for menor que 0, isso significa que não é um quadrado perfeito.
            else if (numero<0)
            {
                i=0;
                raiz_quadrada=-1;
            }
        raiz_quadrada+=1;
    }

    //retorno para a função principal.
    return raiz_quadrada;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    //Pedir e receber a entrada.
    int numero;
    int raiz_quadrada;


    printf("ALGORITMO QUE CALCULA A RAIZ QUADRADA DE UM QUADRADO PERFEITO\n\n");
    printf("Por favor, inserir um quadrado perfeito para o cálculo da raiz: ");
    scanf(" %d",&numero);
    //Verificação e ciclo para a pedir que o usuário insira um numero positivo ou maior que 0. O número 0 estava aparecendo como se não fosse um quadrado perfeito, portanto fiz essa correção.
    if(numero<0 || numero==0)
    {
        while(numero<0 || numero==0)
        {
            if (numero<0)
            {
                printf("\nVocê se descuidou e inseriu o número %d. Ele é menor que 0. \n\nPor favor, inserir um quadrado perfeito para cálculo da raiz: ",numero);
                scanf(" %d",&numero);
            }
            else
            {
                printf("\nVocê inseriu %d. Ele é um quadrado perfeito e sua raiz é 0. \n\nPor favor, inserir outro quadrado perfeito para cálculo da raiz: ",numero);
                scanf(" %d",&numero);
            }

        }
    }

    //A variável raiz_quadrada vai receber o retorno da função.
    raiz_quadrada = calculo_raiz(numero);
    //Fiz a função enviar 0 ou um número inteiro. Se for 0, significa que o número inserido não é um quadrado perfeito.
    if(raiz_quadrada==0)
    {
        printf("\n\nO NÚMERO INSERIDO NÃO É UM QUADRADO PERFEITO.\n\n");
    }
    else
    {
        printf("\n\nA raiz quadrada é: %d.\n\n",raiz_quadrada);
    }

    return 0;
}
