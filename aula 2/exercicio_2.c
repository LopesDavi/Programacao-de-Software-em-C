#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  //Desenvolver um jogo onde o computador "gera" um número entre 1 e 100, e o 
  //jogador tenta advinhar qual é o número gerado. Após cada tentativa, o 
  //programa deve informar se o palpite está alto demais, baixo demais ou 
  //correto.

  //Inicialização a semente do gerador de número.
  srand(time(NULL));

  //Gerando número.
  int numeroGerado = rand() % 100 + 1;

  //Exibindo número gerado para vizualização
  printf("- Número gerado: %d\n\n", numeroGerado);

  int palpiteUsuario;
  int tentativa;

  while(numeroGerado){

      printf(">>> Digite seu palpite ou '0' para sair: ");
      scanf("%d", &palpiteUsuario);

      tentativa++;

      if(palpiteUsuario == 0){
          printf("\nVoce encerrou o jogo.");
          return 0;
      }else if(palpiteUsuario > numeroGerado){
          printf("\nVoce errou. Seu palpite está alto!\n\n");
      }else if(palpiteUsuario < numeroGerado){
          printf("\nVoce errou. Seu palpite está baixo!\n\n");
      }else if(palpiteUsuario == numeroGerado){
          printf("\nSeu palpite esta correto. Voce tentou %dx\n", tentativa);
          return 0;
      }

  }
  
  return 0;
}