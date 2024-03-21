#include <stdio.h>

int main(){
  
//A linguagem C oferece algumas estruturas de decisão, como: if, if-else, 
//switch etc.

  //if -> Tomada de decisão simples.
  
    //if(expressao)
    //  instrucao;
    //Se 'expressao' for true a 'instrucao' é executada.
  
    //Exemplo:
  
    int num = 1;
    if(num == 1){
      printf("\nPrograma válido");
    }

  //if aninhado -> if dentro de if
  
    //Exemplo:
  
    int n = 5;
  
    if(n >= 1)
      if(n <= 5){
      printf("Programa válido.");
    }

  //if-else -> Comando 'else' quando associado ao 'if' executará alguma 
  //instrução se a expressão do if for falsa.

    //if(expressaoTeste)
    //instrucao1;
    //else
      //instrucao2;
  
    //Exemplo:
  
    int valor = 1;

    if(valor == 1){
      printf("Valor válido.");
    }else{
      printf("Valor inválido.");
    }

  //if-else aninhados -> if-else dentro de if-else
  
    //Exemplo:

    float numeroA = 5;
    char operacao = '/';
    float numeroB = 5;

    if(operacao == '+')
      printf(" = %.2f", numeroA + numeroB);
    else
      if(operacao == '-')
        printf(" = %.2f", numeroA - numeroB);
      else
        if(operacao == '*')
          printf(" = %.2f", numeroA * numeroB);
        else
          if(operacao == '/')
            printf(" = %.2f", numeroA / numeroB);

  //switch -> Testa o valor de uma expressão contra uma 
  //lista de constantes inteiras ou caracteres. Quando o 
  //valor coincide, os comandos associados a constante são 
  //executados

    //switch(expressao){
    //case constante1:
      //instrucoes;break; break -> saída imediata do 'case'
    //case constante2:
      //instrucoes;brak;
    //default: default -> saída caso nenhum 'case' seja satisfeito
      //instrucoes;
    //}
  
    //Exemplo:
  
    float numA = 2;
    char op = '+';
    float numB = 2;

    switch(op){
      case '+':
        printf(" = %.2f", numA + numB); break;
      case '-':
        printf(" = %.2f", numA - numB); break;
      case '*':
        printf(" = %.2f", numA * numB); break;
      case '/':
        printf(" = %.2f", numA / numB); break;
      default:
        printf("Operador invalido.");
    }

//A linguagem C oferece algumas estruturas de repetição ou iteração, 
//permitem que um conjunto de instruções seja repetido até que se faça a 
//condição desejada.
  
  //for -> Permite repetir instruções por 'n' vezes

    //for(inicializacao;condicao;incremento) {
    //instrucao1;
    //instrucao2;
    //instrucaoN;
    //}

    //Exemplo:

    for(int i = 0; i < 10; i++){
      printf("%d", i);
    }

  //while -> Quando não é possível determinar o número de vezes que o bloco 
  //será executado 

    //while(condicao){
    //instrucao1;
    //instrucao2;
    //instrucaoN;
    //}

    //Exemplo:

    int contador = 1;

    while(contador <= 10){
      printf("%d", contador);
      contador++;
    }
  
  return 0;
}