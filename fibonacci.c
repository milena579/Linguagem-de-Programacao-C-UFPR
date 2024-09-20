#include <stdio.h>

int main()
{
  int prev = 0;
  int next = 1;
  int atual;
  int vetor[15];
  
  for(int i = 0; i <= 15; i++){
      atual = prev + next;
      prev = next;
      next = atual ;
      vetor[i] = atual;
  }
  
  for(int i = 0; i <= 15; i++){
      printf("[%d]", vetor[i]);
  }
  
}
