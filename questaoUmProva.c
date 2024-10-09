
int main()
{

    int matricula;
    int horas;
    float horaSalario;
    float salario;
    
    scanf("%i", &matricula);
    scanf("%i", &horas);
    scanf("%f", &horaSalario);
    
    salario = (horas * horaSalario);
    
    
    printf("MATRICULA = %i\nSALARIO = R$ %.2f", matricula, salario);
    
}
