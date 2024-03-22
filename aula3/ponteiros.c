#include <stdio.h>

int main(){
//Ponteiro -> Usados para acessar e manipular endereços de memória.

  //Exemplo:
  
    int valor = 27;

    //Declaração de variável ponteiro
    int *ptr;

    //Atribuindo endereço da variável 'valor' ao 
    //ponteiro 'ptr'
    ptr = &valor;
  
    printf("**** Utilizando ponteiros ****\n\n");

    printf("Conteudo da variavel (valor): %d\n", valor);
    printf("Endereco da variavel (valor): %d\n", &valor);
    printf("Conteudo da variavel ponteiro (ptr): %d\n",ptr);
  
  return 0;
}