#include <stdio.h>

int main() {

  // 1 - Declare 3 variáveis do tipo inteiro (int) e atribua valores a elas. Em
  // seguida, exiba a soma desses valores na tela.

  int numA = 5;
  int numB = 9;
  int numC = 7;

  int soma = numA + numB + numC;
  printf("%d", soma);

  // 2 - Declare uma constante do tipo float e atribua o valor de Pi (3.14156).
  // Em seguida, solicite ao usuário que insira o raio de um círculo. Calcule e
  // exiba a área desse círculo utilizando a constante PI.
  const float PI = 3.14156;

  float raio;
  printf("\n>>> Digite o valor do raio do circulo: ");
  scanf("%f", &raio);

  float areaCirculo = PI * (raio * raio);
  printf("\n\n>>> Área do circulo é: %.2f", areaCirculo);
  

  // 3 - Crie um programa que converta  uma temperatura em graus Celsius para
  // Fahrenheit. Solicite ao usuário que insira a temperatura equivalente em
  // Celsius e exiba a temperatura equivalente em Fahrenheit.
  float respostaUsuario;
  printf("\n>>> Qual sua temperatura em Celsius (°C): ");
  scanf("%f", &respostaUsuario);

  float conversaoTemperatura = 1.8 * respostaUsuario + 32;
  printf("\n\n>>> Sua temperatura em Farenheit (°F) é: %.2f", 
  conversaoTemperatura);

  // 4 - Peça ao usuário para inserir 2 números inteiros. Em seguida, realize as
  // seguintes operações e exiba os resultados: soma, subtração, multiplicação, divisão, resto da divisão

  int respostaUsuario1;
  printf("\n>>>Insira o 1º número: ");
  scanf("%d", &respostaUsuario1);

  int respostaUsuario2;
  printf("\n>>>Insira o 2º número: ");
  scanf("%d", &respostaUsuario2);

  int som, sub, mul, div, resDiv;

  som = respostaUsuario1 + respostaUsuario2;
  sub = respostaUsuario1 - respostaUsuario2;
  mul = respostaUsuario1 * respostaUsuario2;
  div = respostaUsuario1 / respostaUsuario2;
  resDiv = respostaUsuario1 % respostaUsuario2;

  printf("\n\nSOMA dos números é: %d\n", som);
  printf("\n\nSUBTRACÃO dos números é: %d\n", sub);
  printf("\n\nMULTIPLICAÇÃO dos números é: %d\n", mul);
  printf("\n\nDIVISÃO dos números é: %d\n", div);
  printf("\n\nRESTO DA DIVISÃO dos números é: %d\n", resDiv);
  

  return 0;
}