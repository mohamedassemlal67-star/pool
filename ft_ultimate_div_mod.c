#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main (void)
{
    int a = 20;
    int b = 3;

    ft_ultimate_div_mod(&a , &b);

    printf ("the div = %d and the mod = %d", a, b);

}

void ft_ultimate_div_mod(int *a, int *b)
{
    int orignal = *a;
    
    int div = *a ;

    *a = div / *b;

    int mod = *b;

    *b = orignal % mod;
}
