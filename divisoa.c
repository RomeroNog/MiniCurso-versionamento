#include <stdio.h>
int main()
{
    // Codigo que recebe dois numeros inteiros e calcula a divisao deles
    int a,b,teste=1;
    float div;

    printf("Digite o primeiro numero: ");
    scanf("%d",&a);

    printf("Digite o segundo numero: ");
    scanf("%d",&b);

    div = (float)a/(float)b;
    
    printf("A divisao eh: %.2f",div);
    
return 0;
}