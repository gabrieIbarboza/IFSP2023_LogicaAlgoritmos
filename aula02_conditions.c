/******************************************************************************

Written GDB Online

*******************************************************************************/
#include <stdio.h>

//
// Aula 02 - Condições
//

int main()
{
    //  Operadores
    void Operadores( void )
    {
        int x = 5, y = 8;
    
        y = ++x; //add 1 e atribui
        y = x++; //atribui e add 1
        
        printf("X é: %d", x);
        printf("\nY é: %d", y);
    }
    
    // É maior ou menor que zero?
    void MaiorQueZero( void )
    {
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
    }
    
    // Qual entrada é um número maior?
    void QuemMaior( void )
    {
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
    }
    
    // Tranformar char maiúsculo em minúsculo
    void TranformarEmLetraMinuscula( void )
    {
        char letra;
        
        printf("Digite uma letra minuscula: ");
        scanf("%c", &letra);
        
        printf("Letra maiuscula: %c", letra-32);
    }

    // É maior de idade?
    void VerificaIdade (void)
    {
        int idade = 0;
        
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade > 18)
        {
            printf("\nVocê pode dirigir!\n");
            printf("É só comprar um carro!");
        }
        else
        {
            printf("\nVocê é menor de idade, portanto, nem pense em comprar um carro >=(\n");
            printf("Fim!");
        }
    }
    
    // Calcula Aprovação
    void EstouAprovado (void)
    {
        int faltas = 0;
        float media = 0;

        printf("Média: ");
        scanf("%f", &media);

        printf("Faltas: ");
        scanf("%d", &faltas);

        if (!(media > 5.9 && faltas < 10))
        {
            printf("Aprovado!");
        }
        else
        {
            printf("Reprovado.");
        }
    }

    // Chamando algum dos programas
    Operadores();
    return 0;
}
