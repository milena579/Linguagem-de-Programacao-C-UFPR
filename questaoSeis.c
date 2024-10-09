//Bhaskara

#include <stdio.h>
#include <math.h>

int main()
{

  int a, b, c;
  int delta;
  int x1, x2;
  
  scanf("%i", &a);
  scanf("%i", &b);
  scanf("%i", &c);
  
  delta = (b*b) - (4*a*c);
  x1 = (-b + sqrt(delta)) / (2*a);
  x2 = (-b - sqrt(delta)) / (2*a);

  
  if (delta < 0){
    printf("A função não toca o eixo, então não tem raízes");
  }
  else{
      if( x1 == x2) {
        printf("A função só tem uma raiz em %i", x1);
      } 
      if (x1 != x2){
        printf("As raízes desta função são %i e %i", x1, x2);
      }
  }
}
