#include <stdio.h>

#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

// Função para movimentação do Bispo
void moverBispo() {
    int i;
    for (i = 0; i < MOVIMENTO_BISPO; i++) {
        printf("Diagonal Superior Direita\n");
    }
}

// Função para movimentação da Torre
void moverTorre() {
    int i;
    for (i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }
}

// Função para movimentação da Rainha
void moverRainha() {
    int i;
    for (i = 0; i < MOVIMENTO_RAINHA; i++) {
        printf("Esquerda\n");
    }
}

// Função principal para controlar a movimentação das peças
int main() {
    int escolha;
    
    printf("Escolha uma peça para movimentar:\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    
    printf("Digite o número da peça desejada: ");
    scanf("%d", &escolha);
    
    // Lógica de movimentação com base na escolha do usuário
    switch (escolha) {
        case 1:
            printf("Movendo o Bispo:\n");
            moverBispo();
            break;
        case 2:
            printf("Movendo a Torre:\n");
            moverTorre();
            break;
        case 3:
            printf("Movendo a Rainha:\n");
            moverRainha();
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;

}
