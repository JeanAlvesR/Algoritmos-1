/* 2 � O algoritmo computacional abaixo, escrito em linguagem de programa��o C, deve realizar a convers�o de um n�mero decimal entre 0 e 255 para bin�rio. Uma forma de convers�o � por meio de divis�es sucessivas, dividindo o n�mero (dividendo) pelo n�mero 2 na base 10 (divisor), anotando
os restos das divis�es, sendo que o quociente � o dividendo da pr�xima opera��o de divis�o, at� que o quociente atinja o valor 0 (zero). Por exemplo, o n�mero 78 na base 10, deve ser dividido
por 2, resultando no quociente 39 e resto 0; o quociente 39 se torna o dividendo e deve ser dividido por 2, resultando no quociente 19 e resto 1; o quociente 19 se torna o dividendo e deve ser dividido por 2, resultando no quociente 9 e resto 1; o quociente 9 se forna o dividendo e deve ser dividido por 2, resultando no quociente 4 e resto 1; o quociente 4 se torna o dividendo e deve ser dividido por 2, resultando no quociente 2 e resto 0; o quociente 2 se torna o dividendo e deve ser dividido por 2, resultando no quociente 1 e resto 0; o quociente 1 se torna o dividendo e deve ser dividido por 2, resultando no quociente 0 e resto 1. O n�mero bin�rio � formado pelos restos das
opera��es, do �ltimo resto para o primeiro resto, neste caso, 1001110 Verifique se o algoritmo
atinge o objetivo; caso contr�rio, indique os problemas no algoritmo e proponha corre��o(�es): */

//Bibliotecas.
#include <stdio.h>
// Adicionei a biblioteca Locale para sair no idioma PT.
#include<locale.h>

//Primeira corre��o,al�m da biblioteca adicionada, � organizar o algoritmo, pois fica mais claro tanto para quem o escreve quanto para quem o l�.

// Fun��o que retorna o resto da divis�o: 0 ou 1.
    // Quando se tem Void, significa que � procedimento, isto �, n�o retorna valor para fun��o principal. Portanto, para retornar, deve-se tranform�-la em fun��o.
    // N�o estava declarada a v�riavel que receberia o dividendo da fun��o principal.
int calculoResto( int num )
{
    int resto;
    resto = num % 2;
    return resto;
}
// Fun��o que retorna o Quociente Atualizado.
    // S� precisa da v�riavel num, e ela copiar� o valor que est� no dividendo da fun��o principal.
    // A fun��o n�o estava retornando nada, ent�o inclui o return.
int calculoQuociente(int num)
{
    num = num / 2;
    // return
    return num;
}
//fun��o principal
int main( )
{
    // Fun��o da biblioteca
    setlocale(LC_ALL,"Portuguese");
    //declara��o de v�riaveis.
    int dividendo, resto, indice;
    int binario[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    //Entrada
    printf("Entre com um n�mero inteiro entre 0 e 255: ");
    scanf("%d",&dividendo);
    //Inclui uma verifica��o de entrada.
    while(dividendo>255 || dividendo<0)
    {
        printf("Entre com um n�mero inteiro entre 0 e 255: ");
        scanf("%d",&dividendo);
    }

    indice = 0;
    //la�o para atualizar e receber os n�meros atualizados no vetor.
    //dividendo > 0, n�o menor.
    while ( dividendo > 0 )
    {
        binario[indice] = calculoResto(dividendo);
        dividendo = calculoQuociente(dividendo);
        indice = indice + 1;
    }
    //La�o para sa�da.
    for ( indice = 7; indice > -1; indice-- )
    {
        printf("%d ",binario[indice]);
    }

    return 0;
}

