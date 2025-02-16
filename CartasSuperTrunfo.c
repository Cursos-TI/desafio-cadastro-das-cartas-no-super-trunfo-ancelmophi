#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int populacao, pontos_turisticos;
    char estado, codigo_carta[20],nome_cidade[30];
    float area, pib;
    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o estado: ");
    scanf("%c", &estado);

    printf("Digite o código da carta: ");
    scanf("%s", &codigo_carta[20]);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade[30]);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f",&pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Estado: %c\n Código da carta: %s\n Nome da cidade: %s\n", estado, codigo_carta, nome_cidade);

    printf("População: %d\n", populacao);

    printf("Área: %f km²\n", area);

    printf("PIB: %f\n", pib);

    printf("Número de pontos turísticos: %d\n", pontos_turisticos);

    

    return 0;
}
