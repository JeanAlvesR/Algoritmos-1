/* Algoritmo de cálculo do IPTU 'Imposto Predial Territorial Urbano' e os valores das parcelas
que o proprietário tem que pagar.

    IPTU depende do valor venal == IPTU = 1%Valor Venal.

        O 'valor venal' é cálculado através da 'soma dos valores da área do terreno e da área construída'.
        valor_venal = valor_terreno + valor_construída

        O 'valor do terreno' é a área do terreno vezes R$320,40.
        valor_terreno = area_terreno*320,4

        O 'valor da área construída' é a 'área construída x um valor que depende do tipo de imóvel' 'tabela'
        valor_construída = área construída x 'depende do tipo do imóvel'

Entradas do usuário
    - Área do terreno;
    - Área construída;
    - Tipo de imóvel;
    - Número de parcelas.

Condições
    - O número de parcelas deve ser entre 1 e 8;
    - Se o pagamento for uma única parcela, desconto de 10%.

Saídas
    - Valor Venal;
    - Valor do IPTU;
    - Valor de cada parcela.

Tabela do tipo de imóvel e seus respectivos valores.
    - Precário 'A': R$ 102,15.
    - Médio 'B':R$ 300,52.
    - Bom 'C': R$ 607,72.
    - Luxo 'D': R$ 1001,05.

*/

//Biblioteca que possibilita a entrada e saída de dados
#include<stdio.h>

//Programa principal
int main ()
{

    //Declaração de variáveis
    float iptu, valor_venal, valor_terreno,valor_construida,area_construida,area_terreno,valor_parcelas;
    int parcelas;
    char opcao;

    //Entrada do tipo de imóvel
    printf("CALCULO DO IPTU\n\n");
    printf("MENU DO TIPO DE IMOVEL\n");
    printf("[a] Imovel Precario\n");
    printf("[b] Imovel Medio\n");
    printf("[c] Imovel Bom\n");
    printf("[d] Imovel Luxo\n");
    scanf("%c",&opcao);

    //Entrada das áreas
    printf("Inserir Area do terreno: ");
    scanf("%f",&area_terreno);
    printf("Inserir Area Construida do Terreno: ");
    scanf("%f",&area_construida);

    // Entrada do número de parcelas
    printf("Inserir o Numero de Parcelas '1 a 8': ");
    scanf("%i",&parcelas);

    //Condição do número de parcelas 1 a 8
    if ((parcelas<1)||(parcelas>8))
    {
        printf("\nNao eh permitido o numero de parcelas inferior a 1 ou superior a 8.\n\n");
    }

    else
    {
        //Condição se o imóvel for Precário
        if (opcao=='a')
        {
            valor_terreno = area_terreno*320.4;
            valor_construida = area_construida*102.15;
            valor_venal = valor_terreno + valor_construida;
            iptu = 0.01*valor_venal;
            valor_parcelas = iptu/parcelas;
                //Condição do desconto de 10%
                if (parcelas==1)
                {
                    valor_parcelas = iptu*0.9;
                }
            printf("\nO valor venal eh: %.2f\nO valor do iptu eh: %.2f\nO valor das parcelas eh: %.2f\n\n ",valor_venal,iptu,valor_parcelas);
        }
        //Condição se o imóvel for Médio
        if (opcao=='b')
        {
            valor_terreno = area_terreno*320.4;
            valor_construida = area_construida*300.52;
            valor_venal = valor_terreno + valor_construida;
            iptu = 0.01*valor_venal;
            valor_parcelas = iptu/parcelas;
                //Condição do desconto de 10%
                if (parcelas==1)
                {
                    valor_parcelas = iptu*0.9;
                }
            printf("\nO valor venal eh: %.2f\nO valor do iptu eh: %.2f\nO valor das parcelas eh: %.2f\n\n ",valor_venal,iptu,valor_parcelas);
        }
        //Condição se o imóvel for Bom
        if (opcao=='c')
        {
            valor_terreno = area_terreno*320.4;
            valor_construida = area_construida*607.72;
            valor_venal = valor_terreno + valor_construida;
            iptu = 0.01*valor_venal;
            valor_parcelas = iptu/parcelas;
                //Condição do desconto de 10%
                if (parcelas==1)
                {
                    valor_parcelas = iptu*0.9;
                }
            printf("\nO valor venal eh: %.2f\nO valor do iptu eh: %.2f\nO valor das parcelas eh: %.2f\n\n ",valor_venal,iptu,valor_parcelas);
        }
        //Condição se o imóvel for Luxo
        if (opcao=='d')
        {
            valor_terreno = area_terreno*320.4;
            valor_construida = area_construida*1001.05;
            valor_venal = valor_terreno + valor_construida;
            iptu = 0.01*valor_venal;
            valor_parcelas = iptu/parcelas;
                //Condição do desconto de 10%
                if (parcelas==1)
                {
                    valor_parcelas = iptu*0.9;
                }
            printf("\nO valor venal eh: %.2f\nO valor do iptu eh: %.2f\nO valor das parcelas eh: %.2f\n\n ",valor_venal,iptu,valor_parcelas);
        }


    }

    return 0;

}































