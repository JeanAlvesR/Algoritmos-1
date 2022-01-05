/*2 - Construir um algoritmo computacional ou programa usando a linguagem de programação
C para representar um plano usando uma matriz M x N (M é o número de linhas, N é o
número de colunas da matriz, N e M podem ser iguais e devem ser maiores do que 2). A
matriz armazena números. O usuário deve entrar com os valores de M, N, os elementos da
matriz e 3 coordenadas, em que cada coordenada contém uma linha e uma coluna e representa
um ponto no plano. O programa deve calcular e apresentar qual par de pontos possui a maior
distância e qual par possui a menor distância. Pode utilizar a distância Euclidiana para
calcular a distância entre os pontos. O programa também deve somar os elementos maiores do
que 10 da matriz e informar o usuário no caso da inexistência de elementos maiores do que
10.

a) Matriz (m,n).v

b) Verificar se m e n são maiores que 2.v

c) Entrar com os números da matriz em função de M e N (A Matriz armazena número (Float)).v

d)Entrar com 3 coordenadas. Cada coordenada contém linha e coluna e representa um ponto no plano.

e)Cálcular e Apresentar qual par de pontos tem maior distancia e qual par possui menor distancia.
                Pode usar distância Euclidiana.

f) O programa também deve somar todos os números da matriz que são maiores que 10 e, se não tiver, avisar o usuário da inexistência.V*/



//Bibliotecas
#include<stdio.h>
#include<locale.h>
//usei a biblioteca math só para usar a raiz quadrada e o elevado.
#include<math.h>

// Função principal
int main()
{
    //informando qual idioma será a entrada e saída de dados.
    setlocale(LC_ALL,"Portuguese");

    int m, n,i,j;
    float coordenada1[2],  coordenada2[2], coordenada3[2], d1d2, d1d3, d2d3, soma_matriz=0;

    // Cabeçario.
    printf("ALGORITMO QUE RECEBE UMA MATRIZ E SOMA OS ELEMENTOS MAIORES QUE 10, SE EXISTIREM, E, DEPOIS, RECEBE 3 COORDENADAS, CALCULA A DISTÂNCIA ENTRE ELAS E MOSTRA A MAIOR E MENOR DISTÂNCIA\n\OBS: AS LINHAS E COLUNAS DEVEM SER MAIORES QUE 2\n\n");

    printf("Separados por espaço, inserir 'M' (número de linhas) e 'N' (número de colunas) da matriz 1: ");
    scanf("%d %d",&m,&n);
    //CHECAGEM PARA SABER SE AS ENTRADAS SÃO VÁLIDAS
    if(m<=2 || n<=2)
    {
        while(m<=2 || n<=2)
        {
        printf("Erro! Inserir m e n maiores que 2: ");
        scanf("%d %d",&m,&n);
        }
    }
    float matriz[m][n];
    //Inserir os números na matriz.
    printf("\nMATRIZ\n");

    for(i=0; i<m; i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Inserir número da linha %d e coluna %d: ",(i+1),(j+1));
            scanf(" %f",&matriz[i][j]);
        }
    }

    //IMPRIMIR MATRIZ 1
    printf("\n\nMATRIZ\n");

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("[%.2f]",matriz[i][j]);
        }
        printf("|\n");
    }
    //Soma dos elementos maiores que 10 da matriz.
    for(i=0; i<m; i++)
    {
        for(j=0;j<n; j++)
        {
            if(matriz[i][j]>10)
            {
                soma_matriz+=matriz[i][j];
            }
        }
    }
    //verifica a soma das matrizes e vê se existe números maiores que 10 ou não.
    if (soma_matriz==0)
    {
        printf("\n\nNenhum número na matriz é maior que 10.\n\n");
    }
    else
    {
        printf("\n\nA soma dos números maiores que 10 é: %.2f.\n\n",soma_matriz);
    }

    printf("+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-++-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+\n\n");
    //Início do Cálculo da distancia entre 3 coordenadas.
    printf("CÁLCULO DE DISTÂNCIA DE 3 COORDENADAS. MOSTRARÁ A DISTÂNCIA MAIOR E MENOR\n\n");

    //Entrada de Coordenadas
    //Guardei em um vetor, fica bem mais fácil para o cálculo.
    i=0;
    printf("\n\nAgora, insira a coordenada 1 linha e coluna (separadas por espaço):  ");
    scanf(" %f %f",&coordenada1[i],&coordenada1[i+1]);

    printf("\n\nAgora, insira a coordenada 2 linha e coluna (separadas por espaço):  ");
    scanf(" %f %f",&coordenada2[i],&coordenada2[i+1]);

    printf("\n\nAgora, insira a coordenada 3 linha e coluna (separadas por espaço):  ");
    scanf(" %f %f",&coordenada3[i],&coordenada3[i+1]);

    //Cálculo das distâncias usando a biblioteca math.h
    d1d2=sqrt( pow( coordenada1[i]-coordenada2[i],2) + pow(coordenada1[i+1]-coordenada2[i+1],2));
    d1d3=sqrt( pow( coordenada1[i]-coordenada3[i],2) + pow(coordenada1[i+1]-coordenada3[i+1],2));
    d2d3=sqrt( pow( coordenada2[i]-coordenada3[i],2) + pow(coordenada2[i+1]-coordenada3[i+1],2));

    //Comparativo para saber a maior distância e impressão da maior distância.

    if(d1d3>d1d2 || d2d3>d1d2)
    {


            if(d2d3>d1d3)
            {
                printf("\n\n\nA maior distância é a coordenada 2 em relação à coordenada 3: %.2f\n",d2d3);
            }
            else
            {
                printf("\n\n\nA maior distância é coordenada 1 em relação à coordenada 3: %.2f.\n",d1d3);
            }
    }
    else
    {
        printf("\n\n\nA maior distância é coordenada 1 em relação à coordenada 2: %.2f.\n",d1d2);
    }

    //Compartivo e impressao da distância menor.

    if(d1d3<d1d2 || d2d3<d1d2)
    {

        if(d2d3<d1d3)
        {
            printf("\nA menor distância é a coordenada 2 em relação à coordenada 3: %.2f\n\n",d2d3);
        }
        else
        {
            printf("\nA menor distância é coordenada 1 em relação à coordenada 3: %.2f.\n\n",d1d3);
        }
    }
    else
    {
        printf("\nA menor distância é coordenada 1 em relação à coordenada 2: %.2f.\n\n",d1d2);
    }

    //Caso existam distâncias iguais.
    if ( d1d2==d1d3 || d1d2 == d2d3 || d1d3==d2d3)
    {
        printf("\n\nCUIDADO!!! Verifique, pois há distâncias iguais entre as coordenadas.\n\n");
    }

    return 0;
}


