/* Algoritmo que cálcula a média de 5 números
    - Se uma das entradas for 0, então o número do divisor terá que diminuir;
*/

//Biblioteca que possibilita entrada e saída
#include<stdio.h>

int main (){

    float numero1, numero2, numero3, numero4, numero5,media;
    int n1,n2,n3,n4,n5;
    printf("Insira o primeiro numero: ");
    scanf("%f",&numero1);
    printf("Insira o segundo numero: ");
    scanf("%f",&numero2);
    printf("Insira o terceiro numero: ");
    scanf("%f",&numero3);
    printf("Insira o quarto numero: ");
    scanf("%f",&numero4);
    printf("Insira quinto numero: ");
    scanf("%f",&numero5);

//Condição para o N1
    if (numero1==0)
    {
        n1=0;
    }
    else
    {
        n1=1.0;
    }
//Condição para o N2
    if (numero2==0)
    {
        n2=0;
    }
    else
    {
        n2=1.0;
    }
//Condição para o N3
    if (numero3==0)
    {
        n3=0;
    }
    else
    {
        n3=1.0;
    }
//Condição para o N4
    if (numero4==0)
    {
        n4=0;
    }
    else
    {
        n4=1.0;
    }
//Condição para o N5
    if (numero5==0)
    {
        n5=0;
    }
    else
    {
        n5=1.0;
    }

//Cálculo da média
    media = (numero1+numero2+numero3+numero4+numero5)/(n1+n2+n3+n4+n5);

//Saída

    printf("A media eh: %.2f",media);

    return 0;


}
