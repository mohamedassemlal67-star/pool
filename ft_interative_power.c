#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main (void)
{
    int result = ft_iterative_power(5,0);
    printf("result: %d", result);
}

int ft_iterative_power(int nb, int power)
{
    int res = 1;
    if (nb == 1 || nb == 0)
    {
        return 1;
    }

    if (nb < 0)
    {
        return 0;
    }
    
    for (int i = 0; i < power; i++)
    {
        res *= nb;
    }
    return res;
    
}