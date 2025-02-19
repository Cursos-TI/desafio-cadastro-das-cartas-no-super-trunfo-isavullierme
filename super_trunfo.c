#include <stdio.h>

int main() {
    // Variáveis para armazenar os atributos da cidade
    char codigo[4]; 
    char nome[50];  
    int populacao;  
    float area;    
    double pib;    
    int pontos_turisticos; 

    // Cadastro da Carta
    printf("=== Cadastro de Carta - Super Trunfo Países ===\n");

    // Solicita os dados da cidade
    printf("Código da carta (ex: A01, B02): ");
    scanf("%s", codigo);

    printf("Nome da cidade: /n");
    scanf("%s", nome);

    printf("População: /n ");
    scanf("%d", &populacao);

    printf("Área (em km²): /n");
    scanf("%f", &area);

    printf("PIB (em bilhões): /n ");
    scanf("%lf", &pib);

    printf("Número de pontos turísticos: /n ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados da Carta
    printf("\n=== Dados da Cidade Cadastrada ===\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}