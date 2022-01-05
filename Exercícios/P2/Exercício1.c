/*
1 - Escreva um algoritmo em linguagem de programação C para cadastrar até 40 alunos de
uma turma usando struct. As informações necessárias são: número do Registro do Aluno,
nome do aluno, nome da disciplina, nota da Prova 1, nota da Prova 2, data de ingresso no curso, sendo que data deve ser formada por dia, mês e ano. O algoritmo deve calcular e exibir a
média final de cada aluno, informando se foi Aprovado ou Não Aprovado. Para ser aprovado, a média final deve ser maior ou igual a 6,0, lembrando que as notas das provas e a média
são valores de 0 a 10, e cada prova possui o mesmo peso na média final. O usuário pode escolher o aluno para visualizar a informação de aprovação, por exemplo, o primeiro aluno cadastrado,
o segundo aluno cadastrado.

a) Cadastrar até 40 alunos:
        Número do Registro do Aluno; int
        Nome do Aluno; string
        Nome da Disciplina; string
        Nota da Prova 1; float
        Nota da Prova 2; float
        data de Ingresso no Curso: dia, mes, ano. int

b) Não pode entrada com notas maiores que 10 ou menores que 0.

c) O Algoritmo deve cálcular a média: Pesos iguais, isto é, 0,5 para cada.

d) Verificar se o aluno foi aprovado ou não: aprovação >= 6.

e) Opção de escolher o aluno para verificar se foi aprovado.

f) Opção de ver mais alunos ou sair do programa.*/

// Bibliotecas respectivamentes entrada e saída de dados, e biblioteca que permite configurar as saídas de acordo com o idioma escolhido.
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
    //declaração das váriaveis que utilizei
    int i,j,quantidade;
    char condicao[20];
    char condicao1[] = "Aprovado";
    char condicao2[] = "Não Aprovado";
    char letra;
    //Entrada da quantidade de alunos
    printf("Quantos alunos gostaria de cadastrar(O máximo de alunos é 40)?\nR: ");
    scanf(" %d",&quantidade);
    //verificação da quantidade de alunos: não pode ser maior que 40 e nem 0 ou menor.
    if(quantidade>40 ||  quantidade<=0)
    {
        while(quantidade>40 || quantidade<=0)
        {
            printf("A quantidade de alunos não pode ser maior que 40, menor ou igual a 0. Por favor, insira a quantidade novamente: ");
            scanf(" %d",&quantidade);
        }
    }
    //vetor do novo tipo em função da quantidade de alunos.
    disciplina aluno[quantidade];

    //ciclo para receber as entradas corretamente dentro do vetor aluno.
    for (i=0; i<quantidade; i++)
    {

        printf("\n\nNúmero do Registro do aluno %d: ",(i+1));
        scanf(" %d",&aluno[i].registro);

        printf("\nPrimeiro nome do aluno %d: ",(i+1));
        scanf(" %s",&aluno[i].primeiro_nome);

        printf("\nÚltimo nome do aluno %d: ",(i+1));
        scanf(" %s",&aluno[i].ultimo_nome);

        printf("\nNome da matéria: ");
        scanf(" %s",&aluno[i].materia);

        printf("\nInserir dia, mes e ano, separados por espaço, da data de ingresso do aluno %d: ",(i+1));
        scanf(" %d %d %d",&aluno[i].dia,&aluno[i].mes,&aluno[i].ano);

        printf("\nNota da prova 1: ");
        scanf(" %f",&aluno[i].prova1);
        //vericação, a nota não pode ser negativa ou maior que 10.
        if (aluno[i].prova1>10 || aluno[i].prova1<0)
        {
           while(aluno[i].prova1>10 || aluno[i].prova1<0)
           {
                printf("Nota inválida! Inserir nota 1 novamente: ");
                scanf(" %f",&aluno[i].prova1);
           }

        }

        printf("\nNota da prova 2: ");
        scanf(" %f",&aluno[i].prova2);
        //vericação, a nota não pode ser negativa ou maior que 10.
        if (aluno[i].prova2>10 || aluno[i].prova2<0)
        {
           while(aluno[i].prova2>10 || aluno[i].prova2<0)
           {
                printf("Nota inválida! Inserir nota 2 novamente: ");
                scanf(" %f",&aluno[i].prova2);
           }

        }

    //Média do aluno em função de i.
    aluno[i].media = aluno[i].prova1*0.5+aluno[i].prova2*0.5;

    }
    //Comando Do while para fazer com que o usuário posso checar outras notas. Sem isso o programa só serviria para olhar as informações de apenas um aluno.
    do
    {
        printf("\nEm relação a ordem de entrada, digite o número do aluno que gostaria de checar a nota: ");
        scanf(" %d",&i);
            if(i>quantidade || i<=0)
                while(i>quantidade || i<=0)
                {
                    printf("\nIndice do aluno inválido, pois não se encontra dentro do registro!  Inserir outro número:  ");
                    scanf(" %d",&i);
                }

        //Saídas e vericação da média para saber se o aluno que está sendo consultado pelo usuário passou ou não.
        if (aluno[i-1].media>=6)
        {
            printf("\nIndice %d\n\nRegistro: %d.\nNome do Aluno: %s %s.\nNome da Matéria: %s.\nAno de ingresso: %d/%d/%d. \nNota da prova 1: %.2f.\nNota da Prova 2: %.2f.\nMédia: %.2f.\nCondição: %s \n ",
            i,aluno[i-1].registro,aluno[i-1].primeiro_nome,aluno[i-1].ultimo_nome,aluno[i-1].materia,aluno[i-1].dia,
            aluno[i-1].mes,aluno[i-1].ano,aluno[i-1].prova1,aluno[i-1].prova2,aluno[i-1].media,condicao1);

        }
        else
        {
            printf("\n\nIndice %d\n\nRegistro: %d.\nNome do Aluno: %s %s.\nNome da Matéria: %s.\nAno de ingresso: %d/%d/%d. \nNota da prova 1: %.2f.\nNota da Prova 2: %.2f.\nMédia: %.2f.\nCondição: %s \n ",
            i,aluno[i-1].registro,aluno[i-1].primeiro_nome,aluno[i-1].ultimo_nome,aluno[i-1].materia,aluno[i-1].dia,
            aluno[i-1].mes,aluno[i-1].ano,aluno[i-1].prova1,aluno[i-1].prova2,aluno[i-1].media,condicao2);
        }

        printf("\n\nQuer escolher outro aluno? Se sim, digite a letra 'c' para continuar: ");
        scanf(" %c",&letra);

    }while (letra=='c' || letra == 'C');




}

// Função principal
int main()
{
    //informando qual idioma será a entrada e saída de dados.
    setlocale(LC_ALL,"Portuguese");

    // Cabeçario.
    printf("CADASTRO DE ALUNOS\n\n");
    //procedimento.
    registro_alunos();

    return 0;
}



