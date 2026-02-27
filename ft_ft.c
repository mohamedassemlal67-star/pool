#include <stdio.h>

void ft_ft(int *nbr);

int main (void)
{
    int num = 10;

    ft_ft(&num);

    printf("%d",num);

}

void ft_ft(int *nbr)
{
    *nbr = 42;
}