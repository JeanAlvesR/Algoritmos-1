/*3 – Implemente um algoritmo computacional usando a linguagem de programação C que
receba como entrada do usuário uma palavra e use um procedimento para verificar quantas
vogais há na palavra. Considere letras maiúsculas e minúsculas.

a)Uma entrada de dados: String.
b)enviar a palavra para o procedimento.
c)No procedimento, verificar quantas vogais tem na palavra.
    OBS: CONSIDERAR LETRAS MAIÚSCULAS E MINÚSCULAS.*/


#include<stdio.h>
#include<locale.h>



void verificacao(char palavra[61])
{
    int i,j=0;
    //CICLO QUE VERIFICA TODO O VETOR E O CONDICIONAMENTO QUE CONTA TODA VEZ QUE ELE ACHAR UMA VOGAL.
    for(i=0; i<60; i++)
    {
        if (palavra[i]=='a'|| palavra[i]=='A' || palavra[i]=='e' || palavra[i]== 'E' ||
            palavra[i]== 'i' || palavra[i]=='I' || palavra[i]== 'o' || palavra[i]== 'O' || palavra[i]== 'u' || palavra[i] =='U')
        {
            j+=1;
        }
    }
    //SAÍDA DO PROCEDIMENTO: NÚMERO DE VOGAIS.
    printf("\n\nA quantidade de vogais é: %d.\n\n",j);
}

int main ()
{
    setlocale(LC_ALL,"Portuguese");
    char palavra [61];
    int i,j;

    printf("PROGRAMA QUE VERIFICA A QUANTIDADE DE VOGAIS EM UMA PALAVRA (MÁXIMO DE CARACTERES É 60).\nOBS: VOGAL COM ACENTO NÃO É CONTADA.\n");

        //VERIFICA O TAMANHO DA PALAVRA E VÊ SE EXCEDEU O MÁXIMO ESTIPULADO(60). SE EXCEDEU, O PROGRAMA PEDE PARA INSERIR DE NOVO.
        do
        {
            j=0;
            printf("\n\nInsira a palavra que deseja consultar: ");
            scanf("%s",&palavra);
            for(i=0; i<=60; i++)
            {
                if (palavra[i]=='\0')
                {
                    i=60;
                    j-=1;
                }
                j+=1;
            }
        }while(j>60);

    //CHAMADA DO PROCEDIMENTO
    verificacao(palavra);



    return 0;
}
