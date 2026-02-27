#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main (void)
{
    int a = 6;
    int b = 3;
    int div;
    int mod;
    ft_div_mod(a, b, &div ,&mod);

    printf("the div = %d and the mod = %d", div ,mod);
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}