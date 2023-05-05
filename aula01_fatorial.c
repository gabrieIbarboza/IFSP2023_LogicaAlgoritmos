/******************************************************************************

Written in GDB Online

*******************************************************************************/
#include <stdio.h>

//
// Aula 01 - Introdução aos conceitos de Algoritmos e Lógica de Programação
//

//  Function para calcular fatorial de um número
int CalcFat(int n) {
    if(n == 0 || n == 1)
        return 1;
    
    //Chama ela mesma até que n seja 1 ou 0
    return n * (CalcFat(n-1));
}

//      Todo programa em C tem uma função primária que deve ser nomeada "main"; 
//      Ela serve como ponto de partida para a execução do programa; 
//      Ela controla a execução direcionando as chamadas para outras funções no programa.
int main()
{
    int nfat = -1;
    int total = 0;
    
    while(nfat < 0)
    {
        printf("Digite um Número Positivo: ");
        scanf("%d", &nfat);
    }
    
    total = CalcFat(nfat);
    
    printf("%d", nfat);
    printf("! = %d", total);
    
}
