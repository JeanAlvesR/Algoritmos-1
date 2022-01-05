/*
1 - Escreva um algoritmo em linguagem de programa��o C para cadastrar at� 40 alunos de
uma turma usando struct. As informa��es necess�rias s�o: n�mero do Registro do Aluno,
nome do aluno, nome da disciplina, nota da Prova 1, nota da Prova 2, data de ingresso no curso, sendo que data deve ser formada por dia, m�s e ano. O algoritmo deve calcular e exibir a
m�dia final de cada aluno, informando se foi Aprovado ou N�o Aprovado. Para ser aprovado, a m�dia final deve ser maior ou igual a 6,0, lembrando que as notas das provas e a m�dia
s�o valores de 0 a 10, e cada prova possui o mesmo peso na m�dia final. O usu�rio pode escolher o aluno para visualizar a informa��o de aprova��o, por exemplo, o primeiro aluno cadastrado,
o segundo aluno cadastrado.

a) Cadastrar at� 40 alunos:
        N�mero do Registro do Aluno; int
        Nome do Aluno; string
        Nome da Disciplina; string
        Nota da Prova 1; float
        Nota da Prova 2; float
        data de Ingresso no Curso: dia, mes, ano. int

b) N�o pode entrada com notas maiores que 10 ou menores que 0.

c) O Algoritmo deve c�lcular a m�dia: Pesos iguais, isto �, 0,5 para cada.

d) Verificar se o aluno foi aprovado ou n�o: aprova��o >= 6.

e) Op��o de escolher o aluno para verificar se foi aprovado.

f) Op��o de ver mais alunos ou sair do programa.*/

// Bibliotecas respectivamentes entrada e sa�da de dados, e biblioteca que permite configurar as sa�das de acordo com o idioma escolhido.
#include<stdio.h>
#include<locale.h>


// Novo tipo de dado - no caso, dados respectivos aos alunos.
typedef struct
{
    int registro;
    char primeiro_nome[20];
    char ultimo_nome[20];
    char materia[20];
    float prova1;
    float prova2;
    float media;
    int dia,mes,ano;

}disciplina;

//procedimento = corpo do programa.
void registro_alunos()
{
    //declara��o das v�riaveis que utilizei
    int i,j,quantidade;
    char condicao[20];
    char condicao1[] = "Aprovado";
    char condicao2[] = "N�o Aprovado";
    char letra;
    //Entrada da quantidade de alunos
    printf("Quantos alunos gostaria de cadastrar(O m�ximo de alunos � 40)?\nR: ");
    scanf(" %d",&quantidade);
    //verifica��o da quantidade de alunos: n�o pode ser maior que 40 e nem 0 ou menor.
    if(quantidade>40 ||  quantidade<=0)
    {
        while(quantidade>40 || quantidade<=0)
        {
            printf("A quantidade de alunos n�o pode ser maior que 40, menor ou igual a 0. Por favor, insira a quantidade novamente: ");
            scanf(" %d",&quantidade);
        }
    }
    //vetor do novo tipo em fun��o da quantidade de alunos.
    disciplina aluno[quantidade];

    //ciclo para receber as entradas corretamente dentro do vetor aluno.
    for (i=0; i<quantidade; i++)
    {

        printf("\n\nN�mero do Registro do aluno %d: ",(i+1));
        scanf(" %d",&aluno[i].registro);

        printf("\nPrimeiro nome do aluno %d: ",(i+1));
        scanf(" %s",&aluno[i].primeiro_nome);

        printf("\n�ltimo nome do aluno %d: ",(i+1));
        scanf(" %s",&aluno[i].ultimo_nome);

        printf("\nNome da mat�ria: ");
        scanf(" %s",&aluno[i].materia);

        printf("\nInserir dia, mes e ano, separados por espa�o, da data de ingresso do aluno %d: ",(i+1));
        scanf(" %d %d %d",&aluno[i].dia,&aluno[i].mes,&aluno[i].ano);

        printf("\nNota da prova 1: ");
        scanf(" %f",&aluno[i].prova1);
        //verica��o, a nota n�o pode ser negativa ou maior que 10.
        if (aluno[i].prova1>10 || aluno[i].prova1<0)
        {
           while(aluno[i].prova1>10 || aluno[i].prova1<0)
           {
                printf("Nota inv�lida! Inserir nota 1 novamente: ");
                scanf(" %f",&aluno[i].prova1);
           }

        }

        printf("\nNota da prova 2: ");
        scanf(" %f",&aluno[i].prova2);
        //verica��o, a nota n�o pode ser negativa ou maior que 10.
        if (aluno[i].prova2>10 || aluno[i].prova2<0)
        {
           while(aluno[i].prova2>10 || aluno[i].prova2<0)
           {
                printf("Nota inv�lida! Inserir nota 2 novamente: ");
                scanf(" %f",&aluno[i].prova2);
           }

        }

    //M�dia do aluno em fun��o de i.
    aluno[i].media = aluno[i].prova1*0.5+aluno[i].prova2*0.5;

    }
    //Comando Do while para fazer com que o usu�rio posso checar outras notas. Sem isso o programa s� serviria para olhar as informa��es de apenas um aluno.
    do
    {
        printf("\nEm rela��o a ordem de entrada, digite o n�mero do aluno que gostaria de checar a nota: ");
        scanf(" %d",&i);
            if(i>quantidade || i<=0)
                while(i>quantidade || i<=0)
                {
                    printf("\nIndice do aluno inv�lido, pois n�o se encontra dentro do registro!  Inserir outro n�mero:  ");
                    scanf(" %d",&i);
                }

        //Sa�das e verica��o da m�dia para saber se o aluno que est� sendo consultado pelo usu�rio passou ou n�o.
        if (aluno[i-1].media>=6)
        {
            printf("\nIndice %d\n\nRegistro: %d.\nNome do Aluno: %s %s.\nNome da Mat�ria: %s.\nAno de ingresso: %d/%d/%d. \nNota da prova 1: %.2f.\nNota da Prova 2: %.2f.\nM�dia: %.2f.\nCondi��o: %s \n ",
            i,aluno[i-1].registro,aluno[i-1].primeiro_nome,aluno[i-1].ultimo_nome,aluno[i-1].materia,aluno[i-1].dia,
            aluno[i-1].mes,aluno[i-1].ano,aluno[i-1].prova1,aluno[i-1].prova2,aluno[i-1].media,condicao1);

        }
        else
        {
            printf("\n\nIndice %d\n\nRegistro: %d.\nNome do Aluno: %s %s.\nNome da Mat�ria: %s.\nAno de ingresso: %d/%d/%d. \nNota da prova 1: %.2f.\nNota da Prova 2: %.2f.\nM�dia: %.2f.\nCondi��o: %s \n ",
            i,aluno[i-1].registro,aluno[i-1].primeiro_nome,aluno[i-1].ultimo_nome,aluno[i-1].materia,aluno[i-1].dia,
            aluno[i-1].mes,aluno[i-1].ano,aluno[i-1].prova1,aluno[i-1].prova2,aluno[i-1].media,condicao2);
        }

        printf("\n\nQuer escolher outro aluno? Se sim, digite a letra 'c' para continuar: ");
        scanf(" %c",&letra);

    }while (letra=='c' || letra == 'C');




}

// Fun��o principal
int main()
{
    //informando qual idioma ser� a entrada e sa�da de dados.
    setlocale(LC_ALL,"Portuguese");

    // Cabe�ario.
    printf("CADASTRO DE ALUNOS\n\n");
    //procedimento.
    registro_alunos();

    return 0;
}



