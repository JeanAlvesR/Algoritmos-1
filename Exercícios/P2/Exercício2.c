/*2 - Construir um algoritmo computacional ou programa usando a linguagem de programa��o
C para representar um plano usando uma matriz M x N (M � o n�mero de linhas, N � o
n�mero de colunas da matriz, N e M podem ser iguais e devem ser maiores do que 2). A
matriz armazena n�meros. O usu�rio deve entrar com os valores de M, N, os elementos da
matriz e 3 coordenadas, em que cada coordenada cont�m uma linha e uma coluna e representa
um ponto no plano. O programa deve calcular e apresentar qual par de pontos possui a maior
dist�ncia e qual par possui a menor dist�ncia. Pode utilizar a dist�ncia Euclidiana para
calcular a dist�ncia entre os pontos. O programa tamb�m deve somar os elementos maiores do
que 10 da matriz e informar o usu�rio no caso da inexist�ncia de elementos maiores do que
10.

a) Matriz (m,n).v

b) Verificar se m e n s�o maiores que 2.v

c) Entrar com os n�meros da matriz em fun��o de M e N (A Matriz armazena n�mero (Float)).v

d)Entrar com 3 coordenadas. Cada coordenada cont�m linha e coluna e representa um ponto no plano.

e)C�lcular e Apresentar qual par de pontos tem maior distancia e qual par possui menor distancia.
                Pode usar dist�ncia Euclidiana.

f) O programa tamb�m deve somar todos os n�meros da matriz que s�o maiores que 10 e, se n�o tiver, avisar o usu�rio da inexist�ncia.V*/



//Bibliotecas
#include<stdio.h>
#include<locale.h>
//usei a biblioteca math s� para usar a raiz quadrada e o elevado.
#include<math.h>

// Fun��o principal
int main()
{
    //informando qual idioma ser� a entrada e sa�da de dados.
    setlocale(LC_ALL,"Portuguese");

    int m, n,i,j;
    float coordenada1[2],  coordenada2[2], coordenada3[2], d1d2, d1d3, d2d3, soma_matriz=0;

    // Cabe�ario.
    printf("ALGORITMO QUE RECEBE UMA MATRIZ E SOMA OS ELEMENTOS MAIORES QUE 10, SE EXISTIREM, E, DEPOIS, RECEBE 3 COORDENADAS, CALCULA A DIST�NCIA ENTRE ELAS E MOSTRA A MAIOR E MENOR DIST�NCIA\n\OBS: AS LINHAS E COLUNAS DEVEM SER MAIORES QUE 2\n\n");

    printf("Separados por espa�o, inserir 'M' (n�mero de linhas) e 'N' (n�mero de colunas) da matriz 1: ");
    scanf("%d %d",&m,&n);
    //CHECAGEM PARA SABER SE AS ENTRADAS S�O V�LIDAS
    if(m<=2 || n<=2)
    {
        while(m<=2 || n<=2)
        {
        printf("Erro! Inserir m e n maiores que 2: ");
        scanf("%d %d",&m,&n);
        }
    }
    float matriz[m][n];
    //Inserir os n�meros na matriz.
    printf("\nMATRIZ\n");

    for(i=0; i<m; i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Inserir n�mero da linha %d e coluna %d: ",(i+1),(j+1));
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
    //verifica a soma das matrizes e v� se existe n�meros maiores que 10 ou n�o.
    if (soma_matriz==0)
    {
        printf("\n\nNenhum n�mero na matriz � maior que 10.\n\n");
    }
    else
    {
        printf("\n\nA soma dos n�meros maiores que 10 �: %.2f.\n\n",soma_matriz);
    }

    printf("+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-++-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+\n\n");
    //In�cio do C�lculo da distancia entre 3 coordenadas.
    printf("C�LCULO DE DIST�NCIA DE 3 COORDENADAS. MOSTRAR� A DIST�NCIA MAIOR E MENOR\n\n");

    //Entrada de Coordenadas
    //Guardei em um vetor, fica bem mais f�cil para o c�lculo.
    i=0;
    printf("\n\nAgora, insira a coordenada 1 linha e coluna (separadas por espa�o):  ");
    scanf(" %f %f",&coordenada1[i],&coordenada1[i+1]);

    printf("\n\nAgora, insira a coordenada 2 linha e coluna (separadas por espa�o):  ");
    scanf(" %f %f",&coordenada2[i],&coordenada2[i+1]);

    printf("\n\nAgora, insira a coordenada 3 linha e coluna (separadas por espa�o):  ");
    scanf(" %f %f",&coordenada3[i],&coordenada3[i+1]);

    //C�lculo das dist�ncias usando a biblioteca math.h
    d1d2=sqrt( pow( coordenada1[i]-coordenada2[i],2) + pow(coordenada1[i+1]-coordenada2[i+1],2));
    d1d3=sqrt( pow( coordenada1[i]-coordenada3[i],2) + pow(coordenada1[i+1]-coordenada3[i+1],2));
    d2d3=sqrt( pow( coordenada2[i]-coordenada3[i],2) + pow(coordenada2[i+1]-coordenada3[i+1],2));

    //Comparativo para saber a maior dist�ncia e impress�o da maior dist�ncia.

    if(d1d3>d1d2 || d2d3>d1d2)
    {


            if(d2d3>d1d3)
            {
                printf("\n\n\nA maior dist�ncia � a coordenada 2 em rela��o � coordenada 3: %.2f\n",d2d3);
            }
            else
            {
                printf("\n\n\nA maior dist�ncia � coordenada 1 em rela��o � coordenada 3: %.2f.\n",d1d3);
            }
    }
    else
    {
        printf("\n\n\nA maior dist�ncia � coordenada 1 em rela��o � coordenada 2: %.2f.\n",d1d2);
    }

    //Compartivo e impressao da dist�ncia menor.

    if(d1d3<d1d2 || d2d3<d1d2)
    {

        if(d2d3<d1d3)
        {
            printf("\nA menor dist�ncia � a coordenada 2 em rela��o � coordenada 3: %.2f\n\n",d2d3);
        }
        else
        {
            printf("\nA menor dist�ncia � coordenada 1 em rela��o � coordenada 3: %.2f.\n\n",d1d3);
        }
    }
    else
    {
        printf("\nA menor dist�ncia � coordenada 1 em rela��o � coordenada 2: %.2f.\n\n",d1d2);
    }

    //Caso existam dist�ncias iguais.
    if ( d1d2==d1d3 || d1d2 == d2d3 || d1d3==d2d3)
    {
        printf("\n\nCUIDADO!!! Verifique, pois h� dist�ncias iguais entre as coordenadas.\n\n");
    }

    return 0;
}


