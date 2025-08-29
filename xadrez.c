#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Declarando função antes do Main
 // Torre recursiva
    void moverTorre(int casas) {
        // condição de parada
        if (casas <= 0) return;      
        printf("Direita\n");
        // chamada recursiva
        moverTorre(casas - 1);       
        
    }

    // Bispo recursivo
    void moverBispo(int casas) {
        if (casas <= 0) return;
        printf("Cima Direita\n");
        moverBispo(casas - 1);
    }

    // Rainha recursiva
    void moverRainha(int casas) {
        if (casas <= 0) return;
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }

    // Cavalo com laços mais complexos
    void moverCavalo() {
        printf("Movimento do Cavalo (Mestre):\n");
        int movimentos = 0;
         // duas casas para cima
        for (int v = 1; v <= 2; v++) {    
            printf("Cima\n");
            movimentos++;
            if (v == 2) {
                int h = 0;
                // movimento lateral
                while (h < 2) {            
                    h++;
                    // pula a primeira vez
                    if (h == 1) continue;  
                    printf("Direita\n");
                    movimentos++;
                    // limite de movimentos
                    if (movimentos >= 3) break;  
                }
            }
        }
        printf("\n");
}
// agora o principal

int main() {
    
    // movimentos no xadrez

    // Variáveis para armazenar o número de casas
    int casasTorre = 5;   // Torre anda 5 casas etc
    int casasBispo = 5;
    int casasRainha = 8;  

    
    // Movimento da Torre
   
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    
    // Movimento do Bispo
   
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= casasBispo) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    
    // Movimento da Rainha
   
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

    // Cavalo, duas casas para baixo e uma para a esquerda
    printf("Movimento do Cavalo:\n");

    // Loop for para as duas casas pra baixo
    for (int passoBaixo = 1; passoBaixo <= 2; passoBaixo++) {
        printf("Baixo\n");

        // Dentro do segundo movimento para baixo, fazemos o movimento para a esquerda
        if (passoBaixo == 2) {
            int passoEsquerda = 1;
            while (passoEsquerda <= 1) {
                printf("Esquerda\n");
                passoEsquerda++;
            }
        }
    }

    // ---------- Versão Mestre ----------
    printf("=== Versão Mestre (Recursiva) ===\n\n");

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    moverCavalo();
    
    return 0;
}
