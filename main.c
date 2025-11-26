// Importando bibliotecas
#include <stdio.h>
#include <string.h>

// Estrutura de Território
typedef struct {
    char nome[30]; // Nome do território
    char cor[10]; // Cor do território
    int tropas; // Quantidade de tropas no território
} Territorio;

// Constante para facilitar loops
const int TAMANHO_TERRITORIOS = 5;

// Loop principal
int main() {
    // Array de territórios
    Territorio territorios[TAMANHO_TERRITORIOS];

    // Loop para criar territórios
    for (int i = 0;i < TAMANHO_TERRITORIOS;i++) {
        // Entrada do usuário para o nome do território
        printf("\n\nTerritorio %i:\n\nDigite o nome:\n", i + 1);
        scanf("%s", &territorios[i].nome);

        // Entrada do usuário para a cor do território
        printf("Digite a cor:\n");
        scanf("%s", &territorios[i].cor);

        // Entrada do usuário para as tropas do território
        printf("Digite as tropas:");
        scanf("%i", &territorios[i].tropas);
    }

    // Espaçamento entre criação e resultado
    printf("\n\n");
    
    // Loop para mostrar territórios
    for (int i = 0;i < TAMANHO_TERRITORIOS;i++) {
        // Imprimir dados do território na tela
        printf("%i: %s, %s, %i tropas\n", i + 1, territorios[i].nome, territorios[i].cor, territorios[i].tropas);
    }

    // Fim do loop principal
    return 0;
}