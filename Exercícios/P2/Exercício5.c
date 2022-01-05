/*5 � Construa um algoritmo computacional em linguagem de programa��o C que receba um
n�mero inteiro positivo que � um quadrado perfeito e utilize uma fun��o para calcular a raiz
quadrada. Utilize uma fun��o para verificar se o n�mero digitado pelo usu�rio � positivo. No
caso do n�mero n�o ser positivo, solicitar o n�mero novamente. O c�lculo da raiz deve ser
realizado por meio da contagem de subtra��es do n�mero de entrada, usando como
subtraendos n�meros inteiros �mpares, iniciando pelo n�mero 1 e terminando quando o
resultado das sucessivas subtra��es for 0, sendo que o resultado de uma subtra��o � o
minuendo da pr�xima subtra��o. Por exemplo, se o n�mero digitado � 9, os subtraendos s�o 1,
3 e 5, a primeira opera��o � 9 � 1 = 8, a segunda opera��o � 8 � 3 = 5 e a terceira opera��o � 5
� 5 = 0; e tr�s opera��es indicam o valor 3 para a raiz quadrada do n�mero 9.

a) Entrada com n�mero inteiro positivo.

b) checar se o n�mero � positivo, se n�o for, pedir para o usu�rio entrar novamente.

c) Usar fun��o para calcular a raiz quadrada.
            O calculo da raiz quadrada � feito atrav�s da retirada dos n�meros impares em ordem descrecente e sempre aumentando mais 2.*/


#include<stdio.h>
#include<locale.h>


//fun��o para calcular a raiz
int calculo_raiz(int numero)
{
    int raiz_quadrada=0,operador=1,i=1;
    //ciclo para retirar uma quantidade impar x vezes do n�mero inserido.
    while(i)
    {
        numero = numero-operador;
        operador+=2;
            //se for igual a 0, isso significa que � um quadrado perfeito.
            if(numero == 0)
            {
                i=0;
            }
            //se for menor que 0, isso significa que n�o � um quadrado perfeito.
            else if (numero<0)
            {
                i=0;
                raiz_quadrada=-1;
            }
        raiz_quadrada+=1;
    }

    //retorno para a fun��o principal.
    return raiz_quadrada;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    //Pedir e receber a entrada.
    int numero;
    int raiz_quadrada;


    printf("ALGORITMO QUE CALCULA A RAIZ QUADRADA DE UM QUADRADO PERFEITO\n\n");
    printf("Por favor, inserir um quadrado perfeito para o c�lculo da raiz: ");
    scanf(" %d",&numero);
    //Verifica��o e ciclo para a pedir que o usu�rio insira um numero positivo ou maior que 0. O n�mero 0 estava aparecendo como se n�o fosse um quadrado perfeito, portanto fiz essa corre��o.
    if(numero<0 || numero==0)
    {
        while(numero<0 || numero==0)
        {
            if (numero<0)
            {
                printf("\nVoc� se descuidou e inseriu o n�mero %d. Ele � menor que 0. \n\nPor favor, inserir um quadrado perfeito para c�lculo da raiz: ",numero);
                scanf(" %d",&numero);
            }
            else
            {
                printf("\nVoc� inseriu %d. Ele � um quadrado perfeito e sua raiz � 0. \n\nPor favor, inserir outro quadrado perfeito para c�lculo da raiz: ",numero);
                scanf(" %d",&numero);
            }

        }
    }

    //A vari�vel raiz_quadrada vai receber o retorno da fun��o.
    raiz_quadrada = calculo_raiz(numero);
    //Fiz a fun��o enviar 0 ou um n�mero inteiro. Se for 0, significa que o n�mero inserido n�o � um quadrado perfeito.
    if(raiz_quadrada==0)
    {
        printf("\n\nO N�MERO INSERIDO N�O � UM QUADRADO PERFEITO.\n\n");
    }
    else
    {
        printf("\n\nA raiz quadrada �: %d.\n\n",raiz_quadrada);
    }

    return 0;
}
