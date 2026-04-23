#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis
    char estadoCarta1[1], estadoCarta2[1], codigoCarta1[4], codigoCarta2[4], 
    cidadeCarta1[40], cidadeCarta2[40];
    unsigned int populacaoCarta1, populacaoCarta2;
    int pontosTuristicosC1, pontosTuristicosC2, atributoBatalha;
    float areaCarta1, pibCarta1, areaCarta2, pibCarta2, densidadeCarta1, 
    densidadeCarta2; 
    // perCaptaCarta1, perCaptaCarta2;
    // superPoderCarta1, superPoderCarta2;
    
    // Cadastro das Cartas
    printf("Digite os dados da primeira carta!\n\n");
    printf("Estado (A a H): ");
    scanf("%s", &estadoCarta1);
    printf("Código da carta: ");
    scanf("%s", &codigoCarta1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidadeCarta1);
    printf("População: ");
    scanf("%d", &populacaoCarta1);
    printf("Área (em km²): ");
    scanf("%f", &areaCarta1);
    printf("PIB: ");
    scanf("%f", &pibCarta1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosC1);

  // Entrada de dados da segunda carta
    printf("\nDigite os dados da segunda carta!\n\n");
    printf("Estado (A a H): ");
    scanf("%s", &estadoCarta2);
    printf("Código da carta: ");
    scanf("%s", &codigoCarta2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidadeCarta2);
    printf("População: ");
    scanf("%d", &populacaoCarta2);
    printf("Área (em km²): ");
    scanf("%f", &areaCarta2);
    printf("PIB: ");
    scanf("%f", &pibCarta2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosC2);

	densidadeCarta1 = (float) populacaoCarta1 / areaCarta1;
	densidadeCarta2 = (float) populacaoCarta2 / areaCarta2;
	// perCaptaCarta1 = (pibCarta1 * 1000000000.0f) / populacaoCarta1;
	// perCaptaCarta2 = (pibCarta2 * 1000000000.0f) / populacaoCarta2;

	// superPoderCarta1 = populacaoCarta1 + areaCarta1 + pibCarta1 + pontosTuristicosC1 + perCaptaCarta1 + (1.0 * densidadeCarta1);
	// superPoderCarta2 = populacaoCarta2 + areaCarta2 + pibCarta2 + pontosTuristicosC2 + perCaptaCarta2 + (1.0 * densidadeCarta2);

    // Decisão de qual atributo será utilizado
    printf("\n\nQual atributo deseja utilizar para a batalha?\n");
    printf("1. População \n2. Área \n3. PIB \n");
    printf("4. Nº de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Sua escolha: ");
    scanf("%d", &atributoBatalha);

    // Exibição dos Resultados:
    printf("Comparação de Cartas\n");
    printf("Carta 1 - %s\nVersus\n", cidadeCarta1);
    printf("Carta 2 - %s\n", cidadeCarta2);
    printf("--------------------------------\n");

    switch (atributoBatalha)
    {
    case 1:
        printf("Carta 1 - População: %d\n", populacaoCarta1);
        printf("Carta 2 - População: %d\n", populacaoCarta2);
        if (populacaoCarta1 > populacaoCarta2){
            printf("Vencedor: Carta 1!\n");
        } else if (populacaoCarta1 == populacaoCarta2) {
            printf("Foi um Empate!\n");
        } else {
            printf("Vencedor: Carta 2!\n");
        }
        break;
    case 2:
        printf("Carta 1 - Área: %.2f km²\n", areaCarta1);
        printf("Carta 2 - Área: %.2f km²\n", areaCarta2);
        if (areaCarta1 > areaCarta2){
            printf("Vencedor: Carta 1!\n");
        } else if (areaCarta1 == areaCarta2) {
            printf("Foi um Empate!\n");
        } else {
            printf("Vencedor: Carta 2!\n");
        }
        break;
    case 3:
        printf("Carta 1 - PIB: %.2f bilhões de reais.\n", pibCarta1);
        printf("Carta 2 - PIB: %.2f bilhões de reais.\n", pibCarta2);
        if (pibCarta1 > pibCarta2){
            printf("Vencedor: Carta 1!\n");
        } else if (pibCarta1 == pibCarta2) {
            printf("Foi um Empate!\n");
        } else {
            printf("Vencedor: Carta 2!\n");
        }
        break;
    case 4:
        printf("Carta 1 - nº de Pontos Turísticos: %d\n", pontosTuristicosC1);
        printf("Carta 2 - nº de Pontos Turísticos: %d\n", pontosTuristicosC2);
        if (pontosTuristicosC1 > pontosTuristicosC2){
            printf("Vencedor: Carta 1!\n");
        } else if (pontosTuristicosC1 == pontosTuristicosC2) {
            printf("Foi um Empate!\n");
        } else {
            printf("Vencedor: Carta 2!\n");
        }
        break;
    case 5:
        printf("Carta 1 - Densidade Demográfica: %.2f hab/km²\n", densidadeCarta1);
        printf("Carta 2 - Densidade Demográfica: %.2f hab/km²\n", densidadeCarta2);
        if (densidadeCarta1 < densidadeCarta2){
            printf("Vencedor: Carta 1!");
        } else if (densidadeCarta1 == densidadeCarta2) {
            printf("Foi um Empate!");
        } else {
            printf("Vencedor: Carta 2!");
        }
        break;
    default:
        printf("Escolha inválida!\n");
        return 0;
    }

    return 0;
}
