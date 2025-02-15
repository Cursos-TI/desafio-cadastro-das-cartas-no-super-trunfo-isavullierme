#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    //Váriaveis para armazenar os atributos da cidade
    char codigo[4]; // Código da Carta
    char nome[50];  // Nome da Cidade
    int populacao;  // População
    float area;     // Área em km^2
    double pib;     // PIB em bilhões
    int pontos_turisticos;  // Número de pontos turísticos
    
    // Cadastro das Cartas:
    printf("=== Cadastro de Carta - Super Trunfo Países ===/n");
    
    // Solicita os dados da Cidade:
    printf("Código da Carta (ex: A01, B02): ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", nome);

    printf("População: ");
    scanf("%d", &populacao);
    
    printf("Área (em km^2): ");
    scanf("%f" , &area);

    printf("PIB (em bilhões): ");
    scanf("%lf", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados da Carta:
    printf("/n=== Dados da Cidade Cadastrada ===/n");
    printf("Código: %s/n", codigo);
    printf("Nome: %s/n", nome);
    printf("População: %d/n", populacao);
    printf("Área: %2.f/n km^2", area);
    printf("PIB: %.2lf bilhões/n", pib);
    printf("Pontos Turísticos: %d/n", pontos_turisticos);

    return 0;
}
