/* Algoritmo de desconto do imposto de renda
Utilizar o sal�rio inicial e a quantidade de dependentes em fun��o de condi��es tabeladas
para saber o imposto de renda.

Verificar se o sal�rio digitado � positivo: se n�o for, � incorreto.

verificar se o n�mero de dependentes est� entre 0 e 3: se n�o estiver, � incorreto.

Classificar por categoria (A, B, C, D, E).

A aplica��o da aliquota � realizada:
salario final = salario inicial - ((salario inicial - dependentes * dedu��o por dependentes)*al�quota)

*/

//Biblioteca que possibilita entra e sa�da de dados
#include<stdio.h>

int main (){

    float salario_final, salario_inicial, aliquota;
    int dependentes;
    printf("CALCULO DO SALARIO FINAL APOS O DESCONTO DO IMPOSTO DE RENDA\n\n");
    printf("Salario Inicial: ");
    scanf("%f",&salario_inicial);
    printf("Inserir Numero de Dependentes: ");
    scanf("%i",&dependentes);

//Condi��o para que o programa inicie os c�lculos
    // CONDI��O SE O SAL�RIO FOR NEGATIVO OU SE O NUMERO DE DEPENDENTES FOR NEGATIVO OU MAIOR QUE 3
    if ((salario_inicial<0 ) || (dependentes>3) || (dependentes<=0))
    {
        printf("Os valores inseridos sao invalidos");
    }
    // CONDI��O SE TUDO ESTIVER OK
    else
    {
        //CONDI��O COM O SAL�RIO NA CATEGORIA 'A'
        if (salario_inicial<=2000)
        {
            printf("A categoria eh 'A'\nO Salario final eh: %.2f\n\n",salario_inicial);

        }
        //CONDI��O COM O SAL�RIO NA CATEGORIA 'B'
        else if (salario_inicial>2000 && salario_inicial<=3100)
        {
            salario_final = salario_inicial - ((salario_inicial-dependentes*142.8)*0.075);
            printf("A categoria eh 'B'\nO Salario final eh: %.2f\n\n",salario_final);
        }
        //CONDI��O COM O SAL�RIO NA CATEGORIA 'C'
        else if (salario_inicial>3100 && salario_inicial<=4800)
        {
            salario_final = salario_inicial - ((salario_inicial-dependentes*354.8)*0.15);
            printf("A categoria eh 'C'\nO Salario final eh: %.2f\n\n",salario_final);
        }
        //CONDI��O COM O SAL�RIO NA CATEGORIA 'D'
        else if (salario_inicial>4800 && salario_inicial<=5600)
        {
            salario_final = salario_inicial - ((salario_inicial-dependentes*636.13)*0.225);
            printf("A categoria eh 'D'\nO Salario final eh: %.2f\n\n",salario_final);
        }
        //CONDI��O COM O SAL�RIO NA CATEGORIA 'E'
        else if (salario_inicial>5600)
        {
            salario_final = salario_inicial - ((salario_inicial-dependentes*869.39)*0.275);
            printf("A categoria eh 'E'\nO Salario final eh: %.2f\n\n",salario_final);
        }
    }

        return 0;



}
