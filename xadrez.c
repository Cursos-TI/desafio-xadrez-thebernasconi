/*
  MateCheck - Desafio de Xadrez
  Autor: Marco Bernasconi
  Linguagem: C
  Descrição: Implementação dos três níveis do desafio proposto utilizando estruturas de repetição, loops aninhados e funções recursivas para simular movimentos de peças de xadrez.
*/

#include <stdio.h>
#include <locale.h>

// Constantes de movimento
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

// Funções recursivas para os movimentos do nível Mestre
void moverBispoRecursivo(int passos) {
    if (passos == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(passos - 1);
}

void moverTorreRecursivo(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorreRecursivo(passos - 1);
}

void moverRainhaRecursivo(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainhaRecursivo(passos - 1);
}

int main() {
    setlocale(LC_ALL, ""); // Permite acentuação

    // Nível Novato
    printf("\n===== NÍVEL NOVATO =====\n");

    // Bispo (diagonal cima + direita)
    for (int i = 0; i < BISPO_MOV; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Torre (direita)
    int i = 0;
    while (i < TORRE_MOV) {
        printf("Direita\n");
        i++;
    }

    // Rainha (esquerda)
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < RAINHA_MOV);

    // Nível Aventureiro
    printf("\n===== NÍVEL AVENTUREIRO =====\n");
    // Cavalo em L (baixo + esquerda) usando for + while
    for (int linha = 0; linha < 2; linha++) {
        printf("Baixo\n");
    }

    int col = 0;
    while (col < 1) {
        printf("Esquerda\n");
        col++;
    }

    // Nível Mestre
    printf("\n===== NÍVEL MESTRE =====\n");

    // Bispo recursivo
    moverBispoRecursivo(BISPO_MOV);

    // Torre recursiva
    moverTorreRecursivo(TORRE_MOV);

    // Rainha recursiva
    moverRainhaRecursivo(RAINHA_MOV);

    // Cavalo com múltiplas variáveis e condições
    printf("\nMovimentação do Cavalo (1x em L para cima + direita):\n");
    int cima = 0, direita = 0;
    for (; cima < 2 || direita < 1; cima++, direita++) {
        if (cima < 2) {
            printf("Cima\n");
        }
        if (direita < 1) {
            printf("Direita\n");
        }
        if (cima == 1 && direita == 0) continue; // demonstração do uso de continue
        if (cima >= 2 && direita >= 1) break;   // condição de parada
    }

    return 0;
}
