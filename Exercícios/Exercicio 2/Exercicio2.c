/* Algoritmo de desconto do imposto de renda
Utilizar o salário inicial e a quantidade de dependentes em função de condições tabeladas
para saber o imposto de renda.

Verificar se o salário digitado é positivo: se não for, é incorreto.

verificar se o número de dependentes está entre 0 e 3: se não estiver, é incorreto.

Classificar por categoria (A, B, C, D, E).

A aplicação da aliquota é realizada:
salario final = salario inicial - ((salario inicial - dependentes * dedução por dependentes)*alíquota)

*/

//Biblioteca que possibilita entra e saída de dados
#include<stdio.h>

int main (){

    float salario_final, salario_inicial, aliquota;
    int dependentes;
    printf("CALCULO DO SALARIO FINAL APOS O DESCONTO DO IMPOSTO DE RENDA\n\n");
    printf("Salario Inicial: ");
    scanf("%f",&salario_inicial);
    printf("Inserir Numero de Dependentes: ");
    scanf("%i",&dependentes);

//Condição para que o programa inicie os cálculos
    // CONDIÇÃO SE O SALÁRIO FOR NEGATIVO OU SE O NUMERO DE DEPENDENTES FOR NEGATIVO OU MAIOR QUE 3
    if ((salario_inicial<0 ) || (dependentes>3) || (dependentes<=0))
    {
        printf("Os valores inseridos sao invalidos");
    }
    // CONDIÇÃO SE TUDO ESTIVER OK
    else
    {
        //CONDIÇÃO COM O SALÁRIO NA CATEGORIA 'A'
        if (salario_inicial<=2000)
        {
            printf("A categoria eh 'A'\nO Salario final eh: %.2f\n\n",salario_inicial);

        }
        //CONDIÇÃO COM O SALÁRIO NA CATEGORIA 'B'
        else if (salario_inicial>2000 && salario_inicial<=3100)
        {
            salario_final = salario_inicial - ((salario_inicial-dependentes*142.8)*0.075);
            printf("A categoria eh 'B'\nO Salario final eh: %.2f\n\n",salario_final);
        }
        //CONDIÇÃO COM O SALÁRIO NA CATEGORIA 'C'
        else if (salario_inicial>3100 && salario_inicial<=4800)
        {
            salario_final = salario_inicial - ((salario_inicial-dependentes*354.8)*0.15);
            printf("A categoria eh 'C'\nO Salario final eh: %.2f\n\n",salario_final);
        }
        //CONDIÇÃO COM O SALÁRIO NA CATEGORIA 'D'
        else if (salario_inicial>4800 && salario_inicial<=5600)
        {
            salario_final = salario_inicial - ((salario_inicial-dependentes*636.13)*0.225);
            printf("A categoria eh 'D'\nO Salario final eh: %.2f\n\n",salario_final);
        }
        //CONDIÇÃO COM O SALÁRIO NA CATEGORIA 'E'
        else if (salario_inicial>5600)
        {
            salario_final = salario_inicial - ((salario_inicial-dependentes*869.39)*0.275);
            printf("A categoria eh 'E'\nO Salario final eh: %.2f\n\n",salario_final);
        }
    }

        return 0;



}
