#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int  populacao, pontos_turisticos;
    float  area, pib;

    printf("Insira os seguintes atributos das cidades: );
    printf("\nPopulação: \n");
    scanf("%i", &populacao);
    printf("\nPontos turísticos: \n");
	scanf("%i", &pontos_turisticos);
	printf("\nArea: \n");
	scanf("%f", &area);
	printf("\PIB: \n");
	scanf("%f", &pib);

	printf("Cicade 1 \n Populacão: %i \n Pontos turísticos: %i \n Area: %f \n PIB: %f \n", populacao, pontos_turisticos, area, pib);
    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
