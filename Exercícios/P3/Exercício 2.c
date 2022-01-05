/* 2 – O algoritmo computacional abaixo, escrito em linguagem de programação C, deve realizar a conversão de um número decimal entre 0 e 255 para binário. Uma forma de conversão é por meio de divisões sucessivas, dividindo o número (dividendo) pelo número 2 na base 10 (divisor), anotando
os restos das divisões, sendo que o quociente é o dividendo da próxima operação de divisão, até que o quociente atinja o valor 0 (zero). Por exemplo, o número 78 na base 10, deve ser dividido
por 2, resultando no quociente 39 e resto 0; o quociente 39 se torna o dividendo e deve ser dividido por 2, resultando no quociente 19 e resto 1; o quociente 19 se torna o dividendo e deve ser dividido por 2, resultando no quociente 9 e resto 1; o quociente 9 se forna o dividendo e deve ser dividido por 2, resultando no quociente 4 e resto 1; o quociente 4 se torna o dividendo e deve ser dividido por 2, resultando no quociente 2 e resto 0; o quociente 2 se torna o dividendo e deve ser dividido por 2, resultando no quociente 1 e resto 0; o quociente 1 se torna o dividendo e deve ser dividido por 2, resultando no quociente 0 e resto 1. O número binário é formado pelos restos das
operações, do último resto para o primeiro resto, neste caso, 1001110 Verifique se o algoritmo
atinge o objetivo; caso contrário, indique os problemas no algoritmo e proponha correção(ões): */

//Bibliotecas.
#include <stdio.h>
// Adicionei a biblioteca Locale para sair no idioma PT.
#include<locale.h>

//Primeira correção,além da biblioteca adicionada, é organizar o algoritmo, pois fica mais claro tanto para quem o escreve quanto para quem o lê.

// Função que retorna o resto da divisão: 0 ou 1.
    // Quando se tem Void, significa que é procedimento, isto é, não retorna valor para função principal. Portanto, para retornar, deve-se tranformá-la em função.
    // Não estava declarada a váriavel que receberia o dividendo da função principal.
int calculoResto( int num )
{
    int resto;
    resto = num % 2;
    return resto;
}
// Função que retorna o Quociente Atualizado.
    // Só precisa da váriavel num, e ela copiará o valor que está no dividendo da função principal.
    // A função não estava retornando nada, então inclui o return.
int calculoQuociente(int num)
{
    num = num / 2;
    // return
    return num;
}
//função principal
int main( )
{
    // Função da biblioteca
    setlocale(LC_ALL,"Portuguese");
    //declaração de váriaveis.
    int dividendo, resto, indice;
    int binario[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    //Entrada
    printf("Entre com um número inteiro entre 0 e 255: ");
    scanf("%d",&dividendo);
    //Inclui uma verificação de entrada.
    while(dividendo>255 || dividendo<0)
    {
        printf("Entre com um número inteiro entre 0 e 255: ");
        scanf("%d",&dividendo);
    }

    indice = 0;
    //laço para atualizar e receber os números atualizados no vetor.
    //dividendo > 0, não menor.
    while ( dividendo > 0 )
    {
        binario[indice] = calculoResto(dividendo);
        dividendo = calculoQuociente(dividendo);
        indice = indice + 1;
    }
    //Laço para saída.
    for ( indice = 7; indice > -1; indice-- )
    {
        printf("%d ",binario[indice]);
    }

    return 0;
}

