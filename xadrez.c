#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Definição de variáveis
    int BISPO_MOV = 5;
    int TORRE_MOV = 5;
    int RAINHA_MOV = 8;
    int CAVALO_MOV = 1; //flag para controlar o movimento em 'L'

    // Simulação do movimento do Bispo
    printf("Movimento do Bispo:\n");
    for (int i = 1; i <= BISPO_MOV; i++) {
        printf("Direita + Cima\n", i); //Movimentando na diágonal
    }

    printf("\n");

    // Simulação do movimento da Torre
    printf("Movimento da Torre:\n");
    int j = 1;
    while (j <= TORRE_MOV) {
        printf("Direita\n", j);
        j++;
    }

    printf("\n");

    // Simulação do movimento da Rainha
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n", k);
        k++;
    } while (k <= RAINHA_MOV);

    //Simulação do movimento do Cavalo 
    printf("Movimento do Cavalo:\n");
    
    while (CAVALO_MOV --)
    {
      for ( int i = 0; i < 2; i++)
      {
       printf("Baixo\n"); //imprime "Baixo" duas vezes     
      }
      printf("Esquerda\n"); //imprime "Esquerda uma vez"
    }

    return 0;
}