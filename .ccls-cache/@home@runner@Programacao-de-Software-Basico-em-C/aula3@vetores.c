#include <stdio.h>

int main(){

//Vetores -> Estrutura para armazenar código de maneira sequêncial e de tamanho fixo

  //Todos elementos em um vetor devem ser do mesmo tipo.
  //Em vez de declarar várias variáveis individuais, 
  //declara-se um vetor.
  //Os elementos de um vetor são acessados pelo indice.

  //Exemplo:

    float notas[5] = {7, 8.3, 9, 4.5, 10}; //notas[5] -> Tamanho do vetor
    printf("%.2f", notas[0]); //notas[0] -> Acessando o 1º índice (0)
  
  return 0;
}