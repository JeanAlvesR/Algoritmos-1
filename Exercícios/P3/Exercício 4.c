/*4 � Desenvolva um algoritmo computacional, em linguagem de programa��o C que receba
como uma primeira entrada uma matriz de 10 linhas e 5 colunas para armazenar valores num�ricos, e como segunda entrada um valor num�rico; e verifique se esse valor est� gravado na
matriz, informando na tela (sa�da) se encontrou o valor e em que coordenada (linha e coluna)
ele foi encontrado. A matriz pode conter valores iguais e isso deve ser informado ao usu�rio.

a)Matriz de 10 por 5.
b)entrada com valor n�merico "N".
c)inserir n�meros na matriz.
d)verificar se existe n�mero na matriz igual ao valor de N.
e)Sa�da: informar se existe valor e qual coordenada.
    OBS: A matriz pode ter valores iguais, ent�o informar ao usu�rio.
*/


#include<stdio.h>
#include<locale.h>


int main ()
{
    setlocale(LC_ALL,"Portuguese");
    //Declara��o das vari�veis.
    float matriz[10][5],n;
    int i,j,parametro;
    char letra;

    //Cabe�ario
    printf("Algoritmo que recebe n�meros da matriz 10x5 e o usu�rio pode pesquisar se existe n�mero semelhante a ele dentro da matriz\n\n");

    //entradas da matriz
    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\nSeparados por espa�o, inserir o valor da linha %d e coluna %d: ",(i+1),(j+1));
            scanf(" %f",&matriz[i][j]);
        }
    }
    //O do while serve para o programa, caso o usu�rio queira, procurar mais n�meros.
    do
    {

    //N�mero que o usu�rio deseja conferir
    printf("\n\nInserir n�mero que deseja procurar na matriz: ");
    scanf(" %f",&n);
    parametro=0;
    //verifica��o

    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
            if(matriz[i][j]==n)
            {
                printf("\n\nO n�mero da linha %d e coluna %d � igual a %.2f\n\n",(i+1),(j+1),n);
                parametro+=1;
            }
        }
    }
    //Parametro para saber quantos n�meros iguais existem na matriz
    if (parametro==0)
    {
        printf("\n\nN�o h� n�mero(s) igual(is) a %.2f.\n\n",n);
    }
    else
    {
        printf("\n\nH� %d n�mero(s) igual(is) a %.2f.\n\n",parametro,n);
    }

    printf("\n\nDeseja continuar pesquisando os n�meros na matriz? Se sim, digite c: ");
    scanf(" %c",&letra);

    }while (letra=='c'|| letra=='C');

    return 0;

}

