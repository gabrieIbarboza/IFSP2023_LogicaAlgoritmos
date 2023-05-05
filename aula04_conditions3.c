/******************************************************************************

Written in GDB Online

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    //Par ou Impar
    void Programa1(void)
    {
 
        int valor1;

        printf("Digite um valor: ");
        scanf("%d", &valor1);

        if (valor1 % 2 == 0)
        {
            printf("\nO valor %d é par!", valor1);
        }
        else
        {
            printf("\nO valor %d é ímpar!", valor1);
        }
    }
  
    // Maior e diferença
    void Programa2(void)
    {
        
        int valor1, valor2;

        printf("Digite um valor: ");
        scanf("%d", &valor1);

        printf("Digite outro valor: ");
        scanf("%d", &valor2);

        if (valor1 > valor2)
        {
            printf("\nO maior é %d", valor1);
            valor1 = valor1 - valor2;
            printf("\nDiferença= %d", valor1);
        }
        else if (valor1 < valor2)
        {
            printf("\nO maior é %d", valor2);
            valor2 = valor2 - valor1;
            printf("\nDiferença= %d", valor2);
        }
        else
        {
            printf("\nOs dois valores são iguais.");
            valor2 = valor2 - valor1;
            printf("\nDiferença= 0");
        }
    }
    
    // Chamando algum dos programas
    Programa2();
    return 0;

}