#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   
    int opçao, regras;
    int NumeroSecreto, palpite;

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("1. iniciar o jogo\n");
    printf("2. ver regras\n");
    printf("3. sair do jogo\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opçao);

    switch (opçao) {
    case 1:
    srand(time(0));
    NumeroSecreto = rand() % 10; //Gera um número aleatório entre 0 e 9
    printf("escolha um numero entre 0 e 9: ");
    scanf("%d", &palpite);

    if (NumeroSecreto == palpite) {
        printf("Parabéns! Você acertou o número secreto!\n");
        printf("O número secreto era: %d\n", NumeroSecreto);
    } else {
        printf("Que pena, você errou!\n");
        printf("O número secreto era: %d\n", NumeroSecreto);
    }
    break;

    case 2:
        printf("qual regra deseja ver?: ","\n");
        scanf("%d", &regras);
         
        switch (regras) {
        case 1:
            printf("Regra 1!\n"); 
            printf("O jogador deve escolher um número entre 0 e 9.\n");
            break;

        case 2:
            printf("Regra 2!\n");
            printf("O jogador tem apenas uma chance de adivinhar o número secreto.\n");
            break;

        case 3:
            printf("Regra 3!\n");
            printf("O número secreto é gerado aleatoriamente pelo computador.\n");
            break;

            case 4:
            printf("Regra 4!\n");
            printf("caso o jogador acerte o número secreto, ele vence o jogo!, e caso erre o número secreto ele perde o jogo!\n");
            break;
        
            default:
            printf("Opção inválida!\n");
        }
        break;

             case 3: 
        printf("saindo do jogo!\n");
        break;

       default:
       printf("opção inválida!");
       
        }
}
