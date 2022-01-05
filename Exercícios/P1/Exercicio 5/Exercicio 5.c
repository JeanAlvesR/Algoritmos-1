/* Algoritmo que recebe o raio 'r' de uma circunferência dentro de um quadrado e calcula
a área excedente entre a circunferência e o quadrado.
    - A circunferência está dentro de um quadrado;
    - O lado do quadrado é 2*r'raio';
    - A área do quadrado é lado x lado;
    - A área da circunferência é pi(3.14)*r^2;
    - A área excendente é igual a área do quadrado - a área da circunferência.

*/

//Biblioteca que possibilita a entrada e saída de dados
#include<stdio.h>

int main (){
    //variáveis e entrada de dados
    float area_quadrada, area_circulo,r,lado_quadrado,area_excedente;
    printf("CALCULO DE AREA EXCEDENTE ENTRE UM QUADRADO E CIRCULO\n\n");
    printf("Inserir o Raio 'r': ");
    scanf("%f",&r);

    //Cálculos
    area_circulo = 3.14*r*r;
    lado_quadrado = 2*r;
    area_quadrada = lado_quadrado*lado_quadrado;
    area_excedente = area_quadrada-area_circulo;

    //Saída de dados
    printf("A area excedente eh: %.2f\n\n",area_excedente);

    return 0;








}
