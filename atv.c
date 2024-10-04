#include <stdio.h>

int main()
{
<<<<<<< HEAD
    //Codigo para que recebe dois numeros inteiros e realiza a soma, subtração, potencicação e multiplicação.
    int a,b,teste=1;
=======
    int a, b, teste = 1;
>>>>>>> 0b1b84e46f07de1f1a8a44634c1d55476d6a669a

    printf("Digite o primeiro numero: ");
    scanf("%d",&a);

    printf("Digite o segundo numero: ");
    scanf("%d",&b);

    printf("\nSoma: %d", a+b);
    printf("\nSubtracao: %d", a-b);

    for(int i=0; i<b; i++)
    {
        teste *= a;
    }

    printf("\nPotencia: %d", teste);

    // multiplicação
    printf("\nMultiplicacao: %d", a*b);

    return 0;
}