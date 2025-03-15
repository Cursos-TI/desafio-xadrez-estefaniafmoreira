#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    #include <stdio.h>
        // Definição de constantes
        int BISPO_MOV = 5;
        int TORRE_MOV = 5;
        int RAINHA_MOV = 8;
    
        // Simulação do movimento do Bispo
        printf("Movimento do Bispo:\n");
        for (int i = 1; i <= BISPO_MOV; i++) {
            printf("Passo %d: Direita + Cima\n", i);
        }
    
        printf("\n");
    
        // Simulação do movimento da Torre
        printf("Movimento da Torre:\n");
        int j = 1;
        while (j <= TORRE_MOV) {
            printf("Passo %d: Direita\n", j);
            j++;
        }
    
        printf("\n");
    
        // Simulação do movimento da Rainha
        printf("Movimento da Rainha:\n");
        int k = 1;
        do {
            printf("Passo %d: Esquerda\n", k);
            k++;
        } while (k <= RAINHA_MOV);
    
 return 0;

    }