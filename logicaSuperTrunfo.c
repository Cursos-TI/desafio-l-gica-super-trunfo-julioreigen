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
    int pontosTuristicosC1, pontosTuristicosC2, atributoBatalha1, atributoBatalha2;
    float areaCarta1, pibCarta1, areaCarta2, pibCarta2, densidadeCarta1, 
    densidadeCarta2, perCaptaCarta1, perCaptaCarta2,
    superPoderCarta1, superPoderCarta2, totalCarta1 = 0, totalCarta2 = 0;
    
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
	perCaptaCarta1 = (pibCarta1 * 1000000000.0f) / populacaoCarta1;
	perCaptaCarta2 = (pibCarta2 * 1000000000.0f) / populacaoCarta2;

	superPoderCarta1 = populacaoCarta1 + areaCarta1 + pibCarta1 + pontosTuristicosC1 + perCaptaCarta1 + (1.0 * densidadeCarta1);
	superPoderCarta2 = populacaoCarta2 + areaCarta2 + pibCarta2 + pontosTuristicosC2 + perCaptaCarta2 + (1.0 * densidadeCarta2);

    // Decisão de qual atributo será utilizado
    printf("\n\nQual o primeiro atributo que deseja utilizar para a batalha?\n");
    printf("1. População \n2. Área \n3. PIB \n");
    printf("4. Nº de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capta\n");
    printf("7. Super-Poder\n");
    printf("Sua escolha: ");
    scanf("%d", &atributoBatalha1);

    switch (atributoBatalha1) {
    case 1:
        printf("Você escolheu comparar o atributo População!\n");
        printf("Carta 1 - População: %d  |  Carta 2 - População: %d\n", 
            populacaoCarta1, populacaoCarta2);
        totalCarta1 += populacaoCarta1;
        totalCarta2 += populacaoCarta2;
        break;
    case 2:
        printf("Você escolheu comparar o atributo Área!\n");
        printf("Carta 1 - Área: %d  |  Carta 2 - Área: %d\n", areaCarta1, areaCarta2);
        totalCarta1 += areaCarta1;
        totalCarta2 += areaCarta2;
        break;
    case 3:
        printf("Você escolheu comparar o atributo PIB!\n");
        printf("Carta 1 - PIB: %.2f  |  Carta 2 - PIB: %.2f\n", pibCarta1, pibCarta2);
        totalCarta1 += pibCarta1;
        totalCarta2 += pibCarta2;
        break;
    case 4:
        printf("Você escolheu comparar o atributo Nº de Pontos Turísticos!\n");
        printf("Carta 1 - n² Pontos Turísticos: %d  |  Carta 2 - Área: %d\n", pontosTuristicosC1, pontosTuristicosC2);
        totalCarta1 += pontosTuristicosC1;
        totalCarta2 += pontosTuristicosC2;
        break;
    case 5:
        printf("Você escolheu comparar o atributo Densidade Demográfica!\n");
        printf("Carta 1 - Densidade Demográfica: %d  |  Carta 2 - Densidade Demográfica: %d\n", densidadeCarta1, densidadeCarta2);
        totalCarta1 += 1.0 / densidadeCarta1;
        totalCarta2 += 1.0 / densidadeCarta2;
        break;
    case 6:
        printf("Você escolheu comparar o atributo PIB per Capta!\n");
        printf("Carta 1 - PIB per Capta: %.2f  |  Carta 2 - PIB per Capta: %.2f\n", perCaptaCarta1, perCaptaCarta2);
        totalCarta1 += perCaptaCarta1;
        totalCarta2 += perCaptaCarta2;
        break;
    case 7:
        printf("Você escolheu comparar o Super Poder!\n");
        printf("Carta 1 - Super Poder: %.2f  |  Carta 2 - Super Poder: %.2f\n", densidadeCarta1, densidadeCarta2);
        totalCarta1 += superPoderCarta1;
        totalCarta2 += superPoderCarta2;
        break;
    default:
        printf("Opção inválida.");
        return 0;
    }

    printf("Agora escolha o segundo atributo. \n");
    printf("1. População \n2. Área \n3. PIB \n");
    printf("4. Nº de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capta\n");
    printf("7. Super-Poder\n");
    printf("Sua escolha: ");
    scanf("%d", &atributoBatalha2);

    if (atributoBatalha1 == atributoBatalha2) {
        printf("Você não pode escolher o mesmo atributo duas vezes!!!\n");
        return 0;
    }

    switch (atributoBatalha2) {
    case 1:
        printf("Você escolheu comparar o atributo População!\n");
        printf("Carta 1 - População: %d  |  Carta 2 - População: %d\n", 
            populacaoCarta1, populacaoCarta2);
        totalCarta1 += populacaoCarta1;
        totalCarta2 += populacaoCarta2;
        break;
    case 2:
        printf("Você escolheu comparar o atributo Área!\n");
        printf("Carta 1 - Área: %d  |  Carta 2 - Área: %d\n", areaCarta1, areaCarta2);
        totalCarta1 += areaCarta1;
        totalCarta2 += areaCarta2;
        break;
    case 3:
        printf("Você escolheu comparar o atributo PIB!\n");
        printf("Carta 1 - PIB: %.2f  |  Carta 2 - PIB: %.2f\n", pibCarta1, pibCarta2);
        totalCarta1 += pibCarta1;
        totalCarta2 += pibCarta2;
        break;
    case 4:
        printf("Você escolheu comparar o atributo Nº de Pontos Turísticos!\n");
        printf("Carta 1 - n² Pontos Turísticos: %d  |  Carta 2 - Área: %d\n", pontosTuristicosC1, pontosTuristicosC2);
        totalCarta1 += pontosTuristicosC1;
        totalCarta2 += pontosTuristicosC2;
        break;
    case 5:
        printf("Você escolheu comparar o atributo Densidade Demográfica!\n");
        printf("Carta 1 - Densidade Demográfica: %d  |  Carta 2 - Densidade Demográfica: %d\n", densidadeCarta1, densidadeCarta2);
        totalCarta1 += 1.0 / densidadeCarta1;
        totalCarta2 += 1.0 / densidadeCarta2;
        break;
    case 6:
        printf("Você escolheu comparar o atributo PIB per Capta!\n");
        printf("Carta 1 - PIB per Capta: %.2f  |  Carta 2 - PIB per Capta: %.2f\n", perCaptaCarta1, perCaptaCarta2);
        totalCarta1 += perCaptaCarta1;
        totalCarta2 += perCaptaCarta2;
        break;
    case 7:
        printf("Você escolheu comparar o Super Poder!\n");
        printf("Carta 1 - Super Poder: %.2f  |  Carta 2 - Super Poder: %.2f\n", densidadeCarta1, densidadeCarta2);
        totalCarta1 += superPoderCarta1;
        totalCarta2 += superPoderCarta2;
        break;
    default:
        printf("Opção inválida.");
        return 0;
    }
    // Exibição dos Resultados:
    printf("--------------------------------\n");
    printf("Carta 1 - Total de Pontos: %.2f\n", totalCarta1);
    printf("Carta 2 - Total de Pontos: %.2f\n", totalCarta2);
    if (totalCarta1 == totalCarta2) {
        printf("Foi um EMPATE!!!\n");
    } else if (totalCarta1 > totalCarta2) {
        printf("Vencedor: Carta 1!!!\n");
    } else {
        printf("Vencedor: Carta 2!!!\n");
    }

    return 0;
}