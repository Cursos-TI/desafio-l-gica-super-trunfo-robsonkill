#include <stdio.h>

// Desafio Super Trunfo - Cidades
// Tema 2 - Comparação de Cartas
// Níveis: Novato, Aventureiro e Mestre
// Este código inclui todos os niveis

int main() {
    // --------------------------------------
    // NÍVEL NOVATO - COMPARAÇÃO BÁSICA
    // --------------------------------------

    // Definição das variáveis para armazenar as propriedades das cidades
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    int area1, area2;

    // Cadastro das Cartas - Entrada de dados pelo usuário
    printf("NIVEL NOVATO - Comparacao Simples\n");
    printf("Digite o nome da cidade 1: ");
    scanf("%s", cidade1);
    printf("Populacao da cidade 1: ");
    scanf("%d", &populacao1);
    printf("Area da cidade 1 (em km²): ");
    scanf("%d", &area1);

    printf("\nDigite o nome da cidade 2: ");
    scanf("%s", cidade2);
    printf("Populacao da cidade 2: ");
    scanf("%d", &populacao2);
    printf("Area da cidade 2 (em km²): ");
    scanf("%d", &area2);

    // Comparação da população
    printf("\n--- Comparando Populacao ---\n");
    if (populacao1 > populacao2) {
        printf("%s tem maior populacao.\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("%s tem maior populacao.\n", cidade2);
    } else {
        printf("Empate na populacao!\n");
    }

    // Comparação da área
    printf("\n--- Comparando Area ---\n");
    if (area1 > area2) {
        printf("%s tem maior area.\n", cidade1);
    } else if (area2 > area1) {
        printf("%s tem maior area.\n", cidade2);
    } else {
        printf("Empate na area!\n");
    }

    // --------------------------------------
    // NÍVEL AVENTUREIRO - MENU COM SWITCH
    // --------------------------------------

    int escolha;
    printf("\n\nNIVEL AVENTUREIRO - Comparacao com Menu\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("Opcao: ");
    scanf("%d", &escolha);

    // Switch para lidar com a escolha do usuário
    switch (escolha) {
        case 1:
            if (populacao1 > populacao2) {
                printf("Vencedora: %s (maior populacao)\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedora: %s (maior populacao)\n", cidade2);
            } else {
                printf("Empate na populacao.\n");
            }
            break;

        case 2:
            if (area1 > area2) {
                printf("Vencedora: %s (maior area)\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedora: %s (maior area)\n", cidade2);
            } else {
                printf("Empate na area.\n");
            }
            break;

        default:
            printf("Opcao invalida.\n");
    }

    // --------------------------------------
    // NÍVEL MESTRE - DOIS ATRIBUTOS E LÓGICA COMPLEXA
    // --------------------------------------

    int atributo1, atributo2;
    int pontos1 = 0, pontos2 = 0;

    printf("\n\nNIVEL MESTRE - Comparacao Avancada\n");
    printf("Escolha o primeiro atributo para comparar (1 - Populacao, 2 - Area): ");
    scanf("%d", &atributo1);
    printf("Escolha o segundo atributo para comparar (1 - Populacao, 2 - Area): ");
    scanf("%d", &atributo2);

    // Lógica usando operadores ternários
    pontos1 += (atributo1 == 1 && populacao1 > populacao2) ? 1 : 0;
    pontos2 += (atributo1 == 1 && populacao2 > populacao1) ? 1 : 0;

    pontos1 += (atributo1 == 2 && area1 > area2) ? 1 : 0;
    pontos2 += (atributo1 == 2 && area2 > area1) ? 1 : 0;

    pontos1 += (atributo2 == 1 && populacao1 > populacao2) ? 1 : 0;
    pontos2 += (atributo2 == 1 && populacao2 > populacao1) ? 1 : 0;

    pontos1 += (atributo2 == 2 && area1 > area2) ? 1 : 0;
    pontos2 += (atributo2 == 2 && area2 > area1) ? 1 : 0;

    // Exibição dos Resultados
    printf("\n--- Resultado Final ---\n");
    if (pontos1 > pontos2) {
        printf("Vencedora: %s com %d pontos\n", cidade1, pontos1);
    } else if (pontos2 > pontos1) {
        printf("Vencedora: %s com %d pontos\n", cidade2, pontos2);
    } else {
        printf("Empate total!\n");
    }

    return 0;
}
