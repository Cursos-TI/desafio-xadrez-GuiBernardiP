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
#include <stdio.h>

 // torre, bispo e rainha
void movimentacaoTorre(){
    for (int i = 0; i < 5; i++)
    {
        printf("Torre para direita\n"); //Imprime a direção do movimento
    }
}
void movimentacaoBispo(){
    
    int vertical = 1;
    // Mover bispo 5 casas a diagonal para cima a direita
    do
    {
        int horizontal = 1;
        do
        {
            printf("Bispo para direita!\n");
            horizontal++;
        } while (horizontal <= 1);
        
        printf("Bispo para cima!\n");
        vertical++;        
    } while (vertical <= 5);

}
void movimentacaoRainha(){
    int esquerda = 1;
    // mover rainha 8 casas para esquerda
    while (esquerda <= 8)
    {
        printf("Rainha para esquerda\n");
        esquerda++;
    }
}
    

    // Torre, rainha e bispo com suas funçoes recursivas
    printf("Movimentando Torre!\n");
    movimentacaoTorre();

    printf("\nMovimentando Bispo!\n"); //loops aninhados, loop externo o vertical, e interno o horizontal.
    movimentacaoBispo();

    printf("\nMovimentando Rainha!\n");
    movimentacaoRainha();

    // movimentação do cavalo com loop aninhado e multiplas variaveis!
    printf("\nMovimentando Cavalo!\n");
    for (int cima = 0, direita = 0; cima <= 2 && direita <= 1; cima++, direita++)
    {
        printf("Cima\n");
    }                       // não consegui desenvolver essa parte direito
    printf("Direita\n");
    return 0;
}