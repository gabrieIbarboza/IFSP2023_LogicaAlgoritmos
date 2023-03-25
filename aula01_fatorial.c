#include <stdio.h>

int CalcFat(int n) {
    if(n == 0 || n == 1)
        return 1;
    
    return n * (CalcFat(n-1));
}

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