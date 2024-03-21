#include <stdio.h>

int main(){
  
  //Variável é uma área de armazenamento de dados

  //Cada variável possui um nome (representação simbólica)

  int resultado = 95; //Exemplo de variável
  //'resultado' é uma variável do tipo inteiro(int) que recebe o valor 95.

  //Obs: O 'valor' de uma variável pode ser alterado
  char ch = 'a';
  ch = 'b';
  //Nesse caso houve uma reatribuição de valor.

  //Em C o tipo da variável não pode ser alterado.
  int numero = 5; //Variável correta
  //numero = 5.5; Erro pois o valor é do tipo float
  //float numero; Erro pois o tipo foi reatribuido
  
  return 0;
}