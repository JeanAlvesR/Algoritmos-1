/*3 – A Federação Internacional de Futebol (FIFA) precisa de uma estrutura de registro (struct)
para armazenar dados das seleções de futebol que disputam a Copa do Mundo,

contendo um identificador (baseado na posição da seleção de futebol no ranking da FIFA),
 a denominação da seleção de futebol,
  número de jogos disputados,
   número de gols feitos ao final do campeonato,
    número de gols sofridos ao final do campeonato,
     número de cartões amarelos dos atletas da seleção de futebol após o término do campeonato,
      número de cartões vermelhos dos atletas da seleção de futebol após o término do campeonato.

Crie um algoritmo computacional usando a linguagem de programação C que permita o armazenamento de 32 registros, um para
cada seleção de futebol que disputa a Copa do Mundo. O algoritmo deve permitir a inserção
dos registros, a exibição do registro que o usuário selecionar, informando o saldo de gols (relação de gols feitos e sofridos) da seleção registrada.

a)struct com
        ranking int
        nome string
        número de jogos disputados int
        número de gols feitos int
        número de gols sofridos int
        número de cartões amarelos int
        número de cartões vermelhos int
        saldo de gols int

b) Algoritmo que suporte até 32 times.(O usuário pode inserir quantos registros ele quer)

c)exibição do registro

d) Saída: Registro + saldo de gols (Relação de gols feitos e sofridos).

e) Opção de escolher registro

f) Opção de ver mais registros ou sair do programa.*/

// Bibliotecas respectivamentes entrada e saída de dados, e biblioteca que permite configurar as saídas de acordo com o idioma escolhido.
#include<stdio.h>
#include<locale.h>


// Novo tipo de dado - no caso, dados respectivos às seleções.
typedef struct
{
    int ranking;
    char nome[20];
    int jogos_disputados;
    int gols_feitos;
    int gols_tomados;
    int cartao_amarelo;
    int cartao_vermelho;
    int saldo_gols;

}fifa;

//procedimento = corpo do programa.
void registro_selecoes()
{
    //declaração das váriaveis que utilizei
    int i,j,quantidade;
    char letra;

    //Entrada da quantidade de seleções
    printf("Quantas seleções gostaria de cadastrar(O máximo é 32)?\nR: ");
    scanf(" %d",&quantidade);
    //verificação da quantidade de seleções: não pode ser maior que 32 e nem 0 ou menor.
    while(quantidade>32 || quantidade<=0)
    {
        printf("A quantidade de registros não pode ser maior que 32, menor ou igual a 0. Por favor, insira a quantidade novamente: ");
        scanf(" %d",&quantidade);
    }
    //vetor do novo tipo em função da quantidade de seleções.
    fifa selecoes[quantidade];

    //ciclo para receber as entradas corretamente dentro do vetor selecoes. Os comandos while dentro da estrutura for servem para não deixar o usuário cadastrar números negativos.
    for (i=0; i<quantidade; i++)
    {

        printf("\n\nNúmero do Ranking da seleção %d: ",(i+1));
        scanf(" %d",&selecoes[i].ranking);

        printf("\nPrimeiro nome da seleção %d (Caso necessite escrever mais de um nome, escreva-os separados por underline '_' ): ",(i+1));
        scanf(" %s",&selecoes[i].nome);

        printf("\nTotal de jogos disputados: ");
        scanf(" %d",&selecoes[i].jogos_disputados);

            while(selecoes[i].jogos_disputados<0)
            {
                printf("\nTotal de jogos disputados: ");
                scanf(" %d",&selecoes[i].jogos_disputados);
            }

        printf("\nGols feitos: ");
        scanf(" %d",&selecoes[i].gols_feitos);

            while(selecoes[i].gols_feitos<0)
            {
                printf("\nGols feitos: ");
                scanf(" %d",&selecoes[i].gols_feitos);
            }

        printf("\nGols tomados: ");
        scanf(" %d",&selecoes[i].gols_tomados);

            while(selecoes[i].gols_tomados<0)
            {
                printf("\nGols tomados: ");
                scanf(" %d",&selecoes[i].gols_tomados);
            }

        printf("\nNúmero de cartões amarelos: ");
        scanf(" %d",&selecoes[i].cartao_amarelo);

            while(selecoes[i].cartao_amarelo<0)
            {
                printf("\nNúmero de cartões amarelos: ");
                scanf(" %d",&selecoes[i].cartao_amarelo);
            }

        printf("\nNúmero de cartões vermelhos: ");
        scanf(" %d",&selecoes[i].cartao_vermelho);

            while(selecoes[i].cartao_vermelho<0)
            {
                printf("\nNúmero de cartões vermelhos: ");
                scanf(" %d",&selecoes[i].cartao_vermelho);
            }

        //cálculo dos saldo de gols (gols feitos - gols tomados)
        selecoes[i].saldo_gols = selecoes[i].gols_feitos - selecoes[i].gols_tomados;
    }

    //Comando Do while para fazer com que o usuário posso checar outras seleções. Sem isso o programa só serviria para olhar as informações de apenas uma seleção.
    do
    {
        //Pede ao usuário qual registro ele quer ver com base na ordem de entrada.
        printf("\nEm relação a ordem de entrada, digite o número da seleção que gostaria de checar o registro: ");
        scanf(" %d",&i);
            while(i>quantidade || i<=0)
            {
                printf("\nIndice da seleção é inválido, pois não se encontra dentro do registro!  Inserir outro número:  ");
                scanf(" %d",&i);
            }

        printf("\nIndice %d\n\nRanking: %d.\nNome da seleção: %s.\nTotal de jogos disputados: %d.\nGols feitos: %d.\nGols tomados: %d.\nCartões amarelos: %d.\nCartões vermelhos: %d.\nSaldo de gols: %d.\n ",
            i,selecoes[i-1].ranking,selecoes[i-1].nome,selecoes[i-1].jogos_disputados,selecoes[i-1].gols_feitos,selecoes[i-1].gols_tomados,selecoes[i-1].cartao_amarelo,selecoes[i-1].cartao_vermelho,selecoes[i-1].saldo_gols);

        //Serve para checar se o usuário gostaria de continuar.
        printf("\n\nQuer escolher outra seleção? Se sim, digite a letra 'c' para continuar: ");
        scanf(" %c",&letra);

    }while(letra=='c' || letra == 'C');
}
// Função principal
int main()
{
    //informando qual idioma será a entrada e saída de dados.
    setlocale(LC_ALL,"Portuguese");

    // Cabeçario.
    printf("CADASTRO DE SELEÇÕES\n\n");
    //procedimento.
    registro_selecoes();

    return 0;
}









