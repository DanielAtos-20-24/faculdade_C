#include <stdio.h>

int main() {
    char letraEstado;
    int codigoCarta;
    char nomeCidade [20];
    int numeroPopulacao;
    float areaCidade;
    float produtoInterno;
    int pontosTuristicos;

    char letraEstado1;
    int codigoCarta1;
    char nomeCidade1 [20];
    int numeroPopulacao1;
    float areaCidade1;
    float produtoInterno1;
    int pontosTuristicos1;

    printf("********************\n");
    printf("**SUPER TRUNFO 1.0**\n");
    printf("********************\n");

    //Primeira carta
    printf("Primeira carta: \n");
    printf("Digite uma letra representando um estado, de A ao H: \n");
    scanf("%c", letraEstado);

    printf("Digite o código da carta: \n");
    scanf("%d", codigoCarta);    

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", numeroPopulacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", areaCidade);

    printf("Digite o Produto Interno Bruno: \n");
    scanf("%f", produtoInterno);

    printf("Digite a quantidade de pontos turisticos na cidade: \n");
    scanf("%d", pontosTuristicos);

    //------------------------------------------------------------

    printf("Segunda carta: \n");
    printf("Digite uma letra representando um estado, de A ao H: \n");
    scanf("%c", letraEstado1);

    printf("Digite o código da carta: \n");
    scanf("%d", codigoCarta1);    

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade1);

    printf("Digite a população da cidade: \n");
    scanf("%d", numeroPopulacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", areaCidade1);

    printf("Digite o Produto Interno Bruno: \n");
    scanf("%f", produtoInterno1);

    printf("Digite a quantidade de pontos turisticos na cidade: \n");
    scanf("%d", pontosTuristicos1);

    printf("CARTA 1");
    printf("Estado: %c\n", letraEstado);
    printf("Código: %d\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", numeroPopulacao);
    printf("Área: %f\n", areaCidade);
    printf("PIB: %f\n", produtoInterno);
    printf("Número de pontos turisticos: %d\n", pontosTuristicos);

    printf("CARTA 1");
    printf("Estado: %c\n", letraEstado1);
    printf("Código: %d\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", numeroPopulacao1);
    printf("Área: %f\n", areaCidade1);
    printf("PIB: %f\n", produtoInterno1);
    printf("Número de pontos turisticos: %d\n", pontosTuristicos1);
}