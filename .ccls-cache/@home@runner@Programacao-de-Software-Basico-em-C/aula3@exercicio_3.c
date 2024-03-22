#include <stdio.h>

  //OBS: NÃO ENTENDI MUITO BEM SOBRE O MOTIVO E COMO COLOCAR O PONTEIRO NO CÓDIGO

  //Objetivo: Criar um programa em C que permita ao usuário inserir as 
  //notas dos alunos em diferentes matérias, calcular a média de cada 
  //aluno, e determinar se o aluno foi aprovado ou reprovado com base na média.

  //Requisitos:
    //[x] 1 - Utilizar uma matriz para armazenar as notas dos alunos em diversas 
    //matérias.
    //[x] 2 - Implementar laços de repetição para permitir a entrada de notas para 
    //múltiplos alunos e múltiplas matérias.
    //[x] 4 - Criar funções para calcular a média das notas de cada aluno e outra função 
    //para imprimir o status de aprovação do aluno.
    //[x] 5 - Usar estruturas condicionais para determinar se o aluno foi aprovado: 
    //média >= 
    //6.0) ou reprovado.
    //[] 6 - Utilizar ponteiros para manipular os elementos da matriz de notas.

  //Função para calcular média do aluno
      //Parâmetro 1 - Array para armazanar as notas de cada aluno
      //Parâmetro 2 - Número de matérias
  float calcularMediaAluno(int notasAluno[], int numMaterias){

      //Iniciei a soma com 0 por até então não tem nada para somar
      int soma = 0;

      //variável i = 0; enquanto a variável i for menor que o nº de matérias; roda o loop mais uma vez
      for(int i = 0; i < numMaterias; i++)
      {
          //Cada rodada do loop a nota fica armazenada na soma somando a nota atual + próxima
          soma += notasAluno[i];
      }

      //Retorna a soma (todas notas somadas) e divide pelo nº de matérias
      return (float) soma / numMaterias;
  }

  int main(){
  //Criando matriz com 3 linhas (alunos) e 3 colunas (matérias)
   int matriz[3][3];

   int aluno, materia;

      printf("\n========== SISTEMA DE GERENCIAMENTO DE NOTAS ==========\n");

      //Perguntas a nota dos alunos em cada matéria
      for(aluno = 0; aluno < 3; aluno++)
         for(materia = 0; materia < 3; materia++)
      {
          //Pergunda a nota do aluno nas matérias - O (aluno + 1) pq o index comceça no 0
          //Ou seja, o 1º aluno fica na posição 0 + 1 = 1 e assim por diante
          printf("\nQual nota do aluno (%d) na materia (%d): ", aluno + 1, materia + 1);

          //Armazena as notas dos alunos em cada cordenada da matriz.
          scanf("%d", &matriz[aluno][materia]);
      }

      //Exibindo a média e o resultado para cada aluno
      for(aluno = 0; aluno < 3; aluno++){

          //Chamo a função calcularMediaAluno passando como param(aluno da matriz, nº de matéria)
          float mediaAluno = calcularMediaAluno(matriz[aluno], 3);

          //SE mediaAluno for maior/igual 6 então 'aluno aprovado' SE NÃO 'aluno reprovado'
          if(mediaAluno >= 6.0){
              printf("\nMédia do aluno %d é: %.1f - ALUNO APROVADO\n\n", aluno + 1, mediaAluno);
          }else{
              printf("\nMédia do aluno %d é: %.1f - ALUNO REPROVADO\n\n", aluno + 1, mediaAluno);
          }
      }

  return 0;
  }
  
