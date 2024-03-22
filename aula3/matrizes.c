#include <stdio.h>

int main(){
//Matriz ou vetor bidimensional -> É uma lista de vetores unidimensionais. possui linhas e colunas.

  //tipo matrizNome [x][y] -> linhas(x) / colunas(y)

  //Exemplo

     int matriz[3][3];
     int i,j;

     printf("\nDigite o valor para os elementos da matriz\n\n");

     for(i=0;i<3;i++)
        for(j=0;j<3;j++)
     {
         printf("\nElementos[%d][%d] = ", i, j);
         scanf("%d", &matriz[i][j]);
     }

     printf("\n\n**** Saida de dados ****\n\n");

     for(i=0;i<3;i++)
        for(j=0;j<3;j++)
     {
         printf("\nElemento[%d][%d] = %d\n",i,j,matriz[i][j]);
     }
         
  return 0;
}