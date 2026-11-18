#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

int escolhajogador, escolhacomputador;

srand(time(0));

printf("jogo de jokênpo");
printf("1.papel\n");
printf("2.tesoura\n");
printf("3.pedra\n");
printf("escolha: ","\n");
scanf("%d", &escolhajogador);

escolhacomputador == rand() % 3 +1;

switch (escolhajogador) {
    case 1:
    printf("escolhajogador - papel\n");
    break;

    case 2:
    printf("escolhajogador - tesoura\n");
    break;

    case 3:
    printf("escolhajogador - pedra\n");
    break; 

    default: 
    printf("opção inválida");
    break;
    }

    switch (escolhacomputador) {
    case 1:
    printf("escolhacomputador - papel\n");
    break;

    case 2:
    printf("escolhacomputador - tesoura\n");
    break;

    case 3:
    printf("escolhacomputador - pedra\n");
    break; 

    if (escolhajogador == escolhacomputador) {
        printf("o jogo empatou!");
    } else if ((escolhajogador == 1 && escolhacomputador == 3) ||
              (escolhajogador == 2 && escolhacomputador == 1) ||
              (escolhajogador == 3 && escolhacomputador == 2))
              {
              printf("parabéns você ganhou!"); 
            } else {
                printf("que pena, você perdeu!\n");
            }
    
        }

    }

