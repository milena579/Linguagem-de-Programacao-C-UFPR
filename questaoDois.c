
#include <stdio.h>

int main()
{

   float A[100];
   float numero;
   
    for(int i = 0; i < 100; i++ ){
        scanf("%f", &A[i]);
    }
    
    for(int i = 0; i < 100; i++){
        if(A[i] <= 10){
            printf("A[%i] = %.1f \n", i, A[i] );
        }
    }
}
