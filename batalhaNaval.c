#include <stdio.h>

int main() {
    // Definição das letras para as linhas do tabuleiro (A a J)
    char Linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Criando o tabuleiro 10x10
    int Tabuleiro[10][10];

    // Inicialização do tabuleiro com 0 representando água
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            Tabuleiro[i][j] = 0;
        }
    }

    // Exibição do título e das colunas (de 1 a 10)
    printf("TABULEIRO BATALHA NAVAL \n");
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf("%d ", j + 1); 
    }
    printf("\n");

    // Exibição das linhas do tabuleiro (A a J)
    for (int i = 0; i < 10; i++) {
        printf("%c  ", Linha[i]); 
        for (int j = 0; j < 10; j++) {
            printf("%d ", Tabuleiro[i][j]); 
        }
        printf("\n");
    }

    // Posicionando o navio na horizontal
    int LinhaNavio = 2;  
    int ColunaNavio = 3; 
    for (int j = 0; j < 3; j++) {
        Tabuleiro[LinhaNavio][ColunaNavio + j] = 3; 
    }

    // Posicionando um navio vertical
    int LinhaNavioVertical = 5; 
    int ColunaNavioVertical = 6; 
    for (int i = 0; i < 3; i++) {
        Tabuleiro[LinhaNavioVertical + i][ColunaNavioVertical] = 3; 
    }

    // Exibição do tabuleiro após posicionar os navios
    printf("\nTABULEIRO BATALHA NAVAL \n");
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf("%d ", j + 1); 
    }
    printf("\n");

    // Exibição das linhas do tabuleiro novamente (A a J)
    for (int i = 0; i < 10; i++) {
        printf("%c  ", Linha[i]); 
        for (int j = 0; j < 10; j++) {
            printf("%d ", Tabuleiro[i][j]); 
        }
        printf("\n");
    }

    return 0;// Indica que o programa foi executado com sucesso
}
