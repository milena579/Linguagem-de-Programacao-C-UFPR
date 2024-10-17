//Elabore um programa que calcule as raízes de uma equação de 2° grau, utilizando ao menos uma função além da main()

#include <stdio.h>
#include <math.h>

int bhaskara(int a, int b, int c){
  int x1, x2, delta;
  
  delta = (b*b) - (4*a*c);
  x1 = (-b + sqrt(delta)) / (2*a);
  x2 = (-b - sqrt(delta)) / (2*a);    
  
  if (delta < 0){
    printf("A função não toca o eixo, então não tem raízes");
  }
  else{
      if( x1 == x2) {
        printf("A função só tem uma raiz em %i\n", x1);
      } 
      
      if (x1 != x2){
        printf("As raízes desta função são %i e %i\n", x1, x2);
      }
    }
    
    printf("X1 = %i\n", x1 );
    printf("X2 = %i", x2 );
}

int main()
{
    int a, b, c;
  
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    
    bhaskara(a,b,c);
    
    return 0;
}
