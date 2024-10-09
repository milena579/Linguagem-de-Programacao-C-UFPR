//- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.

#include <stdio.h>

int main()
{
    double pi =  3.14159;
    double raio;
    double area ;
    
    scanf("%lf",  &raio);
    
    area = pi * (raio * raio);
    
    printf("A=%.4lf", area);
}
