/*3 � Implemente um algoritmo computacional usando a linguagem de programa��o C que
receba como entrada do usu�rio uma palavra e use um procedimento para verificar quantas
vogais h� na palavra. Considere letras mai�sculas e min�sculas.

a)Uma entrada de dados: String.
b)enviar a palavra para o procedimento.
c)No procedimento, verificar quantas vogais tem na palavra.
    OBS: CONSIDERAR LETRAS MAI�SCULAS E MIN�SCULAS.*/


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
    //SA�DA DO PROCEDIMENTO: N�MERO DE VOGAIS.
    printf("\n\nA quantidade de vogais �: %d.\n\n",j);
}

int main ()
{
    setlocale(LC_ALL,"Portuguese");
    char palavra [61];
    int i,j;

    printf("PROGRAMA QUE VERIFICA A QUANTIDADE DE VOGAIS EM UMA PALAVRA (M�XIMO DE CARACTERES � 60).\nOBS: VOGAL COM ACENTO N�O � CONTADA.\n");

        //VERIFICA O TAMANHO DA PALAVRA E V� SE EXCEDEU O M�XIMO ESTIPULADO(60). SE EXCEDEU, O PROGRAMA PEDE PARA INSERIR DE NOVO.
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
