/* Algoritmo de c�lculo do IPTU 'Imposto Predial Territorial Urbano' e os valores das parcelas
que o propriet�rio tem que pagar.

    IPTU depende do valor venal == IPTU = 1%Valor Venal.

        O 'valor venal' � c�lculado atrav�s da 'soma dos valores da �rea do terreno e da �rea constru�da'.
        valor_venal = valor_terreno + valor_constru�da

        O 'valor do terreno' � a �rea do terreno vezes R$320,40.
        valor_terreno = area_terreno*320,4

        O 'valor da �rea constru�da' � a '�rea constru�da x um valor que depende do tipo de im�vel' 'tabela'
        valor_constru�da = �rea constru�da x 'depende do tipo do im�vel'

Entradas do usu�rio
    - �rea do terreno;
    - �rea constru�da;
    - Tipo de im�vel;
    - N�mero de parcelas.

Condi��es
    - O n�mero de parcelas deve ser entre 1 e 8;
    - Se o pagamento for uma �nica parcela, desconto de 10%.

Sa�das
    - Valor Venal;
    - Valor do IPTU;
    - Valor de cada parcela.

Tabela do tipo de im�vel e seus respectivos valores.
    - Prec�rio 'A': R$ 102,15.
    - M�dio 'B':R$ 300,52.
    - Bom 'C': R$ 607,72.
    - Luxo 'D': R$ 1001,05.

*/

//Biblioteca que possibilita a entrada e sa�da de dados
#include<stdio.h>

//Programa principal
int main ()
{

    //Declara��o de vari�veis
    float iptu, valor_venal, valor_terreno,valor_construida,area_construida,area_terreno,valor_parcelas;
    int parcelas;
    char opcao;

    //Entrada do tipo de im�vel
    printf("CALCULO DO IPTU\n\n");
    printf("MENU DO TIPO DE IMOVEL\n");
    printf("[a] Imovel Precario\n");
    printf("[b] Imovel Medio\n");
    printf("[c] Imovel Bom\n");
    printf("[d] Imovel Luxo\n");
    scanf("%c",&opcao);

    //Entrada das �reas
    printf("Inserir Area do terreno: ");
    scanf("%f",&area_terreno);
    printf("Inserir Area Construida do Terreno: ");
    scanf("%f",&area_construida);

    // Entrada do n�mero de parcelas
    printf("Inserir o Numero de Parcelas '1 a 8': ");
    scanf("%i",&parcelas);

    //Condi��o do n�mero de parcelas 1 a 8
    if ((parcelas<1)||(parcelas>8))
    {
        printf("\nNao eh permitido o numero de parcelas inferior a 1 ou superior a 8.\n\n");
    }

    else
    {
        //Condi��o se o im�vel for Prec�rio
        if (opcao=='a')
        {
            valor_terreno = area_terreno*320.4;
            valor_construida = area_construida*102.15;
            valor_venal = valor_terreno + valor_construida;
            iptu = 0.01*valor_venal;
            valor_parcelas = iptu/parcelas;
                //Condi��o do desconto de 10%
                if (parcelas==1)
                {
                    valor_parcelas = iptu*0.9;
                }
            printf("\nO valor venal eh: %.2f\nO valor do iptu eh: %.2f\nO valor das parcelas eh: %.2f\n\n ",valor_venal,iptu,valor_parcelas);
        }
        //Condi��o se o im�vel for M�dio
        if (opcao=='b')
        {
            valor_terreno = area_terreno*320.4;
            valor_construida = area_construida*300.52;
            valor_venal = valor_terreno + valor_construida;
            iptu = 0.01*valor_venal;
            valor_parcelas = iptu/parcelas;
                //Condi��o do desconto de 10%
                if (parcelas==1)
                {
                    valor_parcelas = iptu*0.9;
                }
            printf("\nO valor venal eh: %.2f\nO valor do iptu eh: %.2f\nO valor das parcelas eh: %.2f\n\n ",valor_venal,iptu,valor_parcelas);
        }
        //Condi��o se o im�vel for Bom
        if (opcao=='c')
        {
            valor_terreno = area_terreno*320.4;
            valor_construida = area_construida*607.72;
            valor_venal = valor_terreno + valor_construida;
            iptu = 0.01*valor_venal;
            valor_parcelas = iptu/parcelas;
                //Condi��o do desconto de 10%
                if (parcelas==1)
                {
                    valor_parcelas = iptu*0.9;
                }
            printf("\nO valor venal eh: %.2f\nO valor do iptu eh: %.2f\nO valor das parcelas eh: %.2f\n\n ",valor_venal,iptu,valor_parcelas);
        }
        //Condi��o se o im�vel for Luxo
        if (opcao=='d')
        {
            valor_terreno = area_terreno*320.4;
            valor_construida = area_construida*1001.05;
            valor_venal = valor_terreno + valor_construida;
            iptu = 0.01*valor_venal;
            valor_parcelas = iptu/parcelas;
                //Condi��o do desconto de 10%
                if (parcelas==1)
                {
                    valor_parcelas = iptu*0.9;
                }
            printf("\nO valor venal eh: %.2f\nO valor do iptu eh: %.2f\nO valor das parcelas eh: %.2f\n\n ",valor_venal,iptu,valor_parcelas);
        }


    }

    return 0;

}































