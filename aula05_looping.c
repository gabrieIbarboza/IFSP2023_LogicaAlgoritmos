/******************************************************************************

Written in GDB Online

*******************************************************************************/

#include <stdio.h>

int main()
{
    // Conta até 10
    void Programa1 (void)
    {
        int cont = 1;
    
        while(cont<=10)
        {
            printf("%d ", cont++);
        }
    }
    
    // Imprimi os ímpares
    void Programa2 (void)
    {
        int cont = 0, var;
        
        while(cont<=25)
        {
            var = cont % 2;
            
            if (var==1)
            {
                printf("%d ", cont);    
            }
            cont++;
        }
    }
    
    // Imprimi os pares
    void Programa3 (void)
    {
        int cont = 0, var;
        
        while(cont<=30)
        {
            var = cont % 2;
            
            if (var==0)
            {
                printf("%d ", cont);
            }
            
            cont++;
        }
    }
    
    // Chamando algum dos programas
    Programa2();
    return 0;

}