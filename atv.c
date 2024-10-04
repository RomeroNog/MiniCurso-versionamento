#include <stdio.h>
int main()
{

    int a,b,teste=1;

    printf("Digite o primeiro numero: ");
    scanf("%d",&a);

    printf("Digite o segundo numero: ");
    scanf("%d",&b);

    printf("\nSoma: %d",a+b);
    printf("\nSubtracao: %d",a-b);

    for(int i=0;i<b;i++)
    {
        teste *=a;
    }
    printf("\nPotencia: %d",teste);

return 0;
}