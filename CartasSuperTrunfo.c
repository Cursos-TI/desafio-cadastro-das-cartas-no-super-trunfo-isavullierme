#include  <stdio.h>

int main() {
        
        // Carta 1:

        char codigo[4]; // Código da carta (ex: A01, B02)
        char nome[50];  // Nome da cidade
        int populacao;  // População
        float area;     // Área em km²
        double pib;     // PIB em bilhões
        int pontos_turisticos; // Número de pontos turísticos
    
        // Cadastro da Carta
        printf("=== Cadastro de Carta - Super Trunfo Países ===\n");
    
        // Solicita os dados da cidade
        printf("Código da carta (ex: A01, B02): ");
        scanf("%s", codigo);
    
        printf("Nome da cidade: ");
        scanf("%s", nome);
    
        printf("População: ");
        scanf("%d", &populacao);
    
        printf("Área (em km²): ");
        scanf("%f", &area);
    
        printf("PIB (em bilhões): ");
        scanf("%lf", &pib);
    
        printf("Número de pontos turísticos: ");
        scanf("%d", &pontos_turisticos);
    
        // Exibição dos Dados da Carta
        printf("\n=== Dados da Cidade Cadastrada ===\n");
        printf("Código: %s\n", codigo);
        printf("Nome: %s\n", nome);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2lf bilhões\n", pib);
        printf("Pontos Turísticos: %d\n", pontos_turisticos);
    

         // Carta 2:
        
         char codigo[4]; // Código da carta (ex: A01, B02)
         char nome[50];  // Nome da cidade
         int populacao;  // População
         float area;     // Área em km²
         double pib;     // PIB em bilhões
         int pontos_turisticos; // Número de pontos turísticos
     
         // Cadastro da Carta
         printf("=== Cadastro de Carta - Super Trunfo Países ===\n");
     
         // Solicita os dados da cidade
         printf("Código da carta (ex: A01, B02): ");
         scanf("%s", codigo);
     
         printf("Nome da cidade: ");
         scanf("%s", nome);
     
         printf("População: ");
         scanf("%d", &populacao);
     
         printf("Área (em km²): ");
         scanf("%f", &area);
     
         printf("PIB (em bilhões): ");
         scanf("%lf", &pib);
     
         printf("Número de pontos turísticos: ");
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