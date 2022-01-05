/* Algoritmo que recebe o raio 'r' de uma circunfer�ncia dentro de um quadrado e calcula
a �rea excedente entre a circunfer�ncia e o quadrado.
    - A circunfer�ncia est� dentro de um quadrado;
    - O lado do quadrado � 2*r'raio';
    - A �rea do quadrado � lado x lado;
    - A �rea da circunfer�ncia � pi(3.14)*r^2;
    - A �rea excendente � igual a �rea do quadrado - a �rea da circunfer�ncia.

*/

//Biblioteca que possibilita a entrada e sa�da de dados
#include<stdio.h>

int main (){
    //vari�veis e entrada de dados
    float area_quadrada, area_circulo,r,lado_quadrado,area_excedente;
    printf("CALCULO DE AREA EXCEDENTE ENTRE UM QUADRADO E CIRCULO\n\n");
    printf("Inserir o Raio 'r': ");
    scanf("%f",&r);

    //C�lculos
    area_circulo = 3.14*r*r;
    lado_quadrado = 2*r;
    area_quadrada = lado_quadrado*lado_quadrado;
    area_excedente = area_quadrada-area_circulo;

    //Sa�da de dados
    printf("A area excedente eh: %.2f\n\n",area_excedente);

    return 0;








}
