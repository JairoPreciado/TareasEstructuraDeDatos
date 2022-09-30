#include <stdio.h>

int exponente(int num, int exp) {
    
    int res;
    
    if(exp == 0){
     res=1;
    }else if (exp > 0) {
     res = num * exponente(num, exp - 1);
    }else if (exp < 0){
     res = 1 / num * exponente(num, exp + 1);
    }
    return res;
}

int main()
{
    int num, exp, res;
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    printf("\ningresa el subindice: ");
    scanf("%d",&exp);
    res= exponente(num, exp);
    printf("\nResultado  %d^%d es: %d\n",num, exp, res);
    return 0;
}
