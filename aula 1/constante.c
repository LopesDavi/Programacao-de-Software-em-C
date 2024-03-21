#include <stdio.h>

int main(){
  
  //Constante é um identificador cujo valor não pode ser alterado.
  
  const float PI = 3.14; //Exemplo de constante
  //Nesse caso a variável 'PI' é constante e por esse motivo não pode nunca ter seu valor alterado.

  //Tipos de constantes
    //- inteiras
    //- ponto flutuante
    //- caracteres -> 'a','F', '2', '{' etc.
    //- sequência de escape ->\n,\t
    //- string literal -> Sequência de caracteres 
    //- enumerações -> enum cor {preto, branco, azul}
    //- É possível definir constantes com #define

  //Tipos de dados e modificadores.
    //- char -> caractere
    //- int -> inteiro
    //- float -> precisão simples
    //- double -> precisão dupla
    //- void -> vazio

  //Operadores
    //Operações aritméticas
      // + -> adição
      // - -> subtração
      // * -> multiplicação
      // / -> divisão
      // % -> resto da divisão
      // -- -> decremento
      // ++ -> incremento

    //Operações de atribuição
      // += -> Atribuição por soma
      // -= -> Atribuição por subtração
      // *= -> Atribuição por multiplicação
      // /= -> Atribuição por divisão
      // %= -> Atribuição por resto da divisão
  
  //Funções
    //printf("formato", args)-saída de informações
    //Exemplo:
    float total = 4 + 5.7;
    printf("Total: %f\n", total);

    //scanf("formato", &args)-entrada de informações
    //Exemplo:
    int mat;
    scanf("%d", &mat);


  
  return 0;
}