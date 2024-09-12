#include <stdio.h>

int main(){
    int valorInteiro;
    scanf("%d", &valorInteiro);
    printf("%d\n", valorInteiro);
    
    int tecla;
    tecla = getchar();
    if(tecla > 'A' || tecla < 'z' )
        printf("%d %c\n", tecla, tecla);
  
    float valorFloat;
    scanf("%f", &valorFloat);
    printf("%.2f\n", valorFloat);
    
    char texto[100];
    gets(texto);   
    gets(texto);
    printf("%s\n", texto);
    return 0;
}
