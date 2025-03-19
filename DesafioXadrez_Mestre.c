#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para movimentar o Bispo
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Diagonal-Direita-Cima\n");
    moverBispoRecursivo(casas - 1);
}

// Função usando loops aninhados para movimentar o Bispo
void moverBispoLoop(int casas) {
    for (int i = 1; i <= casas; i++) {
        for (int j = 1; j <= 1; j++) {
            printf("Diagonal-Direita-Cima %d\n", i);
        }
    }
}

// Função para movimentar o Cavalo utilizando loops complexos
void moverCavalo(int movimentos) {
    int x = 0, y = 0; // Coordenadas iniciais

    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 3; j++) { // Loop para simular o movimento em "L"
            
            if (j < 2) { 
                y++; // Move duas casas para cima
                printf("Cima\n");
               
                continue; // Continua para evitar executar o próximo comando ainda
            }

            x++; // Move uma casa para a direita
            printf("Direita\n");

            if (x >= movimentos) break; // Para o loop se o número máximo de movimentos for atingido
        }
    }
}

int main() {
    // Definição dos valores fixos para cada peça
    int movTorre = 5;
    int movRainha = 8;
    int movBispo = 5;
    int movCavalo = 1;

    // Simulação dos movimentos das peças
    printf("Movimento da Torre:\n");
    moverTorre(movTorre);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(movRainha);
    printf("\n");

    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(movBispo);
    printf("\n");

    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoLoop(movBispo);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo(movCavalo);
    printf("\n");

    return 0;
}