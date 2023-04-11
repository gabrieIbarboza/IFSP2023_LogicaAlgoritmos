/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    /*
    //
    //      Operadores
    //
    
    int x = 5, y = 8;
    
    y = ++x; //add 1 e atribui
    y = x++; //atribui e add 1
    
    printf("X é: %d", x);
    printf("\nY é: %d", y);
    */
    
    /*
    //
    //      Condição
    //
    int n = 0;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    if(n < 0)
    {
        printf("Negativo :'(");
    }
    else if(n > 0)
    {
        printf("Positivo :D");
    }
    else {
        printf("É zero :0");
    }
    */
    
    int n1 = 0, n2 = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &n1);
    printf("\nDigite mais um número inteiro: ");
    scanf("%d", &n2);
    if(n1 == n2)
        printf("\nSão iguais!");
    else if (n1 > n2)
        printf("\nPrimeiro número é maior!");
    else
        printf("\nSegundo número é maior!");
    
    /*
    //
    // ASCII
    //
    char letra;
    
    printf("Digite uma letra minuscula: ");
    scanf("%c", &letra);
    
    printf("Letra maiuscula: %c", letra-32);
    */

    return 0;
}
