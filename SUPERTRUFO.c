#include <stdio.h> 

int main() {
    char Estado;
    char Codigo[20];
    char Cidade[20];
    int Populacao;
    float Area;
    float PIB;
    int Pontos;

    printf("Bem vindo ao Jogo de Super Trunfo Cartas!!!\n");

    printf("Para começar...\n");


    printf("Digite a letra do estado:\n");
    scanf(" %c", &Estado);   

    printf("Digite o Codigo: ");
    scanf("%s", Codigo);    

    printf("Digite o nome da cidade: ");
    scanf("%s", Cidade);     

    printf("Digite a população: ");
    scanf("%d", &Populacao);

    printf("Digite a Area: ");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite os Pontos: ");
    scanf("%d", &Pontos);


printf("Estado: %c\nCodigo: %s\n", Estado, Codigo);
printf("Cidade: %s\nPopulação: %d\n", Cidade, Populacao);
printf("Area: %f\nPIB: %F\nPontos: %d\n ",   Area, PIB, Pontos);



}
