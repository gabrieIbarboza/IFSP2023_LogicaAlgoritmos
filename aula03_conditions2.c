/******************************************************************************

Written in GDB Online

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    // Divisor
    void Programa1 (void)
    {
        int valor1, valor2, resto, quo;


        printf("Digite um valor inteiro: ");
        scanf("%d", &valor1);



        printf("Digite outro valor inteiro: ");
        scanf("%d", &valor2);


        if (valor2==0)
        {
        printf("\nNão é possível dividir por zero.");
        }
        else
        {
        resto = valor1%valor2;
        quo = valor1/valor2;
        printf("\nResto: %d", resto);
        printf("\nQuociente: %d", quo);
        }
    }

    // Análise de caractere
    void Programa2 (void)
    {
    
        char caracter;

        printf("Digite um caracter: ");
        scanf("%c", &caracter);

        if (caracter >= 48 && caracter <= 57){
        printf("\nO valor é um número!");
        }
        else if (caracter >= 65 && caracter <= 90)
        {
        printf("\nO caracter é uma letra maiúscula!");
        }
        else if (caracter >= 97 && caracter <= 122)
        {
        printf("\nO caracter é uma letra minúscula!");
        }
        else
        {
        printf("\nEsse caracter não é uma letra ou número.");
        }
    }

    // Inversão
    void Programa3 (void)
    {
        int A, B, C;
    
        printf("Digite um valor para A: ");
        scanf("%d", &A);

        printf("Digite um valor para B: ");
        scanf("%d", &B);
        
        C=A;
        A=B;
        B=C;

        printf("\nDepois da inversão:\n");
        printf("\nA: %d", A);
        printf("\nB: %d", B);

    }
    
    // Chamando algum dos programas
    Programa1();
    return 0;

}