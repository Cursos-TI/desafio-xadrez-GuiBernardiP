#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Mover a torre 5 casas para direita
    printf("\nMovimentando a Torre!\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n"); //Imprime a direção do movimento
    }

    printf("\nMovimentando a Rainha!\n");
    int esquerda = 1;
    // mover rainha 8 casas para esquerda
    while (esquerda <= 8)
    {
        printf("Esquerda\n");
        esquerda++;
    }
    
    printf("\nMovimentando o Bispo!\n");
    int diagonal = 1;
    // Mover bispo 5 casas a diagonal para cima a direita
    do 
    {
        printf("Direita, Cima\n");
        
        diagonal++;

    } while (diagonal <= 8);
    
    //Mover cavalo 2 casas para cima e 1 oara direita
    int cavalo = 1; // movimento em L do cavalo

    while (cavalo --)
    {   printf("\nMovimentando o Cavalo!\n");
        for (int i = 0; i < 2; i++)
        {
            printf("Cima\n");// imprime "Cima" duas vezes
        }
        printf("Direita"); // Imprime "direita" uma vez
    }

    return 0;
}
