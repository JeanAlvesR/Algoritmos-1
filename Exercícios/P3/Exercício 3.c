/*3 � A Federa��o Internacional de Futebol (FIFA) precisa de uma estrutura de registro (struct)
para armazenar dados das sele��es de futebol que disputam a Copa do Mundo,

contendo um identificador (baseado na posi��o da sele��o de futebol no ranking da FIFA),
 a denomina��o da sele��o de futebol,
  n�mero de jogos disputados,
   n�mero de gols feitos ao final do campeonato,
    n�mero de gols sofridos ao final do campeonato,
     n�mero de cart�es amarelos dos atletas da sele��o de futebol ap�s o t�rmino do campeonato,
      n�mero de cart�es vermelhos dos atletas da sele��o de futebol ap�s o t�rmino do campeonato.

Crie um algoritmo computacional usando a linguagem de programa��o C que permita o armazenamento de 32 registros, um para
cada sele��o de futebol que disputa a Copa do Mundo. O algoritmo deve permitir a inser��o
dos registros, a exibi��o do registro que o usu�rio selecionar, informando o saldo de gols (rela��o de gols feitos e sofridos) da sele��o registrada.

a)struct com
        ranking int
        nome string
        n�mero de jogos disputados int
        n�mero de gols feitos int
        n�mero de gols sofridos int
        n�mero de cart�es amarelos int
        n�mero de cart�es vermelhos int
        saldo de gols int

b) Algoritmo que suporte at� 32 times.(O usu�rio pode inserir quantos registros ele quer)

c)exibi��o do registro

d) Sa�da: Registro + saldo de gols (Rela��o de gols feitos e sofridos).

e) Op��o de escolher registro

f) Op��o de ver mais registros ou sair do programa.*/

// Bibliotecas respectivamentes entrada e sa�da de dados, e biblioteca que permite configurar as sa�das de acordo com o idioma escolhido.
#include<stdio.h>
#include<locale.h>


// Novo tipo de dado - no caso, dados respectivos �s sele��es.
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
    //declara��o das v�riaveis que utilizei
    int i,j,quantidade;
    char letra;

    //Entrada da quantidade de sele��es
    printf("Quantas sele��es gostaria de cadastrar(O m�ximo � 32)?\nR: ");
    scanf(" %d",&quantidade);
    //verifica��o da quantidade de sele��es: n�o pode ser maior que 32 e nem 0 ou menor.
    while(quantidade>32 || quantidade<=0)
    {
        printf("A quantidade de registros n�o pode ser maior que 32, menor ou igual a 0. Por favor, insira a quantidade novamente: ");
        scanf(" %d",&quantidade);
    }
    //vetor do novo tipo em fun��o da quantidade de sele��es.
    fifa selecoes[quantidade];

    //ciclo para receber as entradas corretamente dentro do vetor selecoes. Os comandos while dentro da estrutura for servem para n�o deixar o usu�rio cadastrar n�meros negativos.
    for (i=0; i<quantidade; i++)
    {

        printf("\n\nN�mero do Ranking da sele��o %d: ",(i+1));
        scanf(" %d",&selecoes[i].ranking);

        printf("\nPrimeiro nome da sele��o %d (Caso necessite escrever mais de um nome, escreva-os separados por underline '_' ): ",(i+1));
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

        printf("\nN�mero de cart�es amarelos: ");
        scanf(" %d",&selecoes[i].cartao_amarelo);

            while(selecoes[i].cartao_amarelo<0)
            {
                printf("\nN�mero de cart�es amarelos: ");
                scanf(" %d",&selecoes[i].cartao_amarelo);
            }

        printf("\nN�mero de cart�es vermelhos: ");
        scanf(" %d",&selecoes[i].cartao_vermelho);

            while(selecoes[i].cartao_vermelho<0)
            {
                printf("\nN�mero de cart�es vermelhos: ");
                scanf(" %d",&selecoes[i].cartao_vermelho);
            }

        //c�lculo dos saldo de gols (gols feitos - gols tomados)
        selecoes[i].saldo_gols = selecoes[i].gols_feitos - selecoes[i].gols_tomados;
    }

    //Comando Do while para fazer com que o usu�rio posso checar outras sele��es. Sem isso o programa s� serviria para olhar as informa��es de apenas uma sele��o.
    do
    {
        //Pede ao usu�rio qual registro ele quer ver com base na ordem de entrada.
        printf("\nEm rela��o a ordem de entrada, digite o n�mero da sele��o que gostaria de checar o registro: ");
        scanf(" %d",&i);
            while(i>quantidade || i<=0)
            {
                printf("\nIndice da sele��o � inv�lido, pois n�o se encontra dentro do registro!  Inserir outro n�mero:  ");
                scanf(" %d",&i);
            }

        printf("\nIndice %d\n\nRanking: %d.\nNome da sele��o: %s.\nTotal de jogos disputados: %d.\nGols feitos: %d.\nGols tomados: %d.\nCart�es amarelos: %d.\nCart�es vermelhos: %d.\nSaldo de gols: %d.\n ",
            i,selecoes[i-1].ranking,selecoes[i-1].nome,selecoes[i-1].jogos_disputados,selecoes[i-1].gols_feitos,selecoes[i-1].gols_tomados,selecoes[i-1].cartao_amarelo,selecoes[i-1].cartao_vermelho,selecoes[i-1].saldo_gols);

        //Serve para checar se o usu�rio gostaria de continuar.
        printf("\n\nQuer escolher outra sele��o? Se sim, digite a letra 'c' para continuar: ");
        scanf(" %c",&letra);

    }while(letra=='c' || letra == 'C');
}
// Fun��o principal
int main()
{
    //informando qual idioma ser� a entrada e sa�da de dados.
    setlocale(LC_ALL,"Portuguese");

    // Cabe�ario.
    printf("CADASTRO DE SELE��ES\n\n");
    //procedimento.
    registro_selecoes();

    return 0;
}









