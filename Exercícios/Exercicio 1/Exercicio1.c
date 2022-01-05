/*Criação de um algoritmo para cálculo da média
Prova 1: Peso 4,5
Prova 2: Peso 4,5
Trabalho: Peso 1
"Se a Média Final for menor que 7, nova nota substituindo a menor.
*/

//Biblioteca
#include<stdio.h>

//Programa Principal
int main(){

//Declaração de variáveis
    float nota_prova_1, nota_prova_2, trabalho, nota_final, nota_substitutiva;

//Entrada de dados
    printf("NOTAS DE 0 a 10 DOS ALUNOS\n");
    printf("AS NOTAS DAS PROVAS 1 E 2 TEM PESO 4,5\n");
    printf("A NOTA DO TRABALHO TEM PESO 1\n\n");
    printf("Inserir nota da prova 1: ");
    scanf("%f",&nota_prova_1);
    printf("Inserir nota da prova 2: ");
    scanf("%f",&nota_prova_2);
    printf("Inserir nota do trabalho: ");
    scanf("%f",&trabalho);

    if ((nota_prova_1>10) || (nota_prova_1<0) || (nota_prova_2<0) || (nota_prova_2>10) || (trabalho>10) || (trabalho<0))
    {
        printf("Nao eh possivel realizar o calculo, pois algum item eh negativo ou maior que 10");
    }

    else
    {
//Cálculo
     nota_final = nota_prova_1*0.45 + nota_prova_2*0.45 + trabalho*0.1;

//Condição, se caso a nota final for menor que 7
    if (nota_final<7)
    {
        printf("Ficou de exame,\nNota:%.2f\n\ninserir nota da substituiva: ", nota_final);
        scanf("%f",&nota_substitutiva);

//Comparativo para pegar a menor nota e sustituir
            if (nota_prova_1>nota_prova_2)
            {
                nota_prova_2 = nota_substitutiva;
            }

            else
            {
                nota_prova_1 = nota_substitutiva;

            }
    }

//Cálculo de saída
    nota_final = nota_prova_1*0.45 + nota_prova_2*0.45 + trabalho*0.1;

// Saída
    printf("\nA nota final eh: %.2f\n",nota_final);

    }

    return 0;

}






