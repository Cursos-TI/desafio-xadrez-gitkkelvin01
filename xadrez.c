#include <stdio.h>

int main() {
 //- Movimentação das Peças. 
printf("--- Desafio Xadrez - MateCheck! ---\n\n");

//- Declaração da const casas.
const int casas = 5;

//- Começo da Sessão do bispo.
printf("Movimento do Bispo (diagonal):\n");
//- Inicio do laço for para o movimento do bispo.
for (int i = 1; i <= casas; i++) {
    printf("O Bispo moveu-se para a posição (%d, %d)\n", i, i);
}
printf("\n");

//- Começo da Sessão da torre.
printf("Movimento da Torre (para a direita):\n");

//- Inicio do laço for para o movimento da torre.
for (int i = 1; i <= casas; i++) {
    printf("A torre moveu-se para a posição (%d, 0)\n", i);
}
printf("\n");
//- Começo da Sessão da Rainha.
printf("Movimento da Rainha (para a esquerda):\n");

//- Inicio do laço for para o movimento da rainha.
for (int i = casas; i >= 1; i--) {
    printf("A Rainha moveu-se para a posicao (%d, 0)\n", i);
    }
printf("\n");    
    
return 0;
}
