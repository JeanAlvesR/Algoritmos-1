/*4 – Desenvolva um algoritmo computacional, em linguagem de programação C que receba
como uma primeira entrada uma matriz de 10 linhas e 5 colunas para armazenar valores numéricos, e como segunda entrada um valor numérico; e verifique se esse valor está gravado na
matriz, informando na tela (saída) se encontrou o valor e em que coordenada (linha e coluna)
ele foi encontrado. A matriz pode conter valores iguais e isso deve ser informado ao usuário.

a)Matriz de 10 por 5.
b)entrada com valor númerico "N".
c)inserir números na matriz.
d)verificar se existe número na matriz igual ao valor de N.
e)Saída: informar se existe valor e qual coordenada.
    OBS: A matriz pode ter valores iguais, então informar ao usuário.
*/


#include<stdio.h>
#include<locale.h>


int main ()
{
    setlocale(LC_ALL,"Portuguese");
    //Declaração das variáveis.
    float matriz[10][5],n;
    int i,j,parametro;
    char letra;

    //Cabeçario
    printf("Algoritmo que recebe números da matriz 10x5 e o usuário pode pesquisar se existe número semelhante a ele dentro da matriz\n\n");

    //entradas da matriz
    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\nSeparados por espaço, inserir o valor da linha %d e coluna %d: ",(i+1),(j+1));
            scanf(" %f",&matriz[i][j]);
        }
    }
    //O do while serve para o programa, caso o usuário queira, procurar mais números.
    do
    {

    //Número que o usuário deseja conferir
    printf("\n\nInserir número que deseja procurar na matriz: ");
    scanf(" %f",&n);
    parametro=0;
    //verificação

    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
            if(matriz[i][j]==n)
            {
                printf("\n\nO número da linha %d e coluna %d é igual a %.2f\n\n",(i+1),(j+1),n);
                parametro+=1;
            }
        }
    }
    //Parametro para saber quantos números iguais existem na matriz
    if (parametro==0)
    {
        printf("\n\nNão há número(s) igual(is) a %.2f.\n\n",n);
    }
    else
    {
        printf("\n\nHá %d número(s) igual(is) a %.2f.\n\n",parametro,n);
    }

    printf("\n\nDeseja continuar pesquisando os números na matriz? Se sim, digite c: ");
    scanf(" %c",&letra);

    }while (letra=='c'|| letra=='C');

    return 0;

}

