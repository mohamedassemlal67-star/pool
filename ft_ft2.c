#include <stdio.h>

void ft_ft(int *nbr);

int main (void)
{
    int num = 1994;

    printf("the number befor %d\n", num);

    ft_ft(&num);

    printf("the number after %d",num);

}

void ft_ft(int *nbr)
{
    *nbr = 42;
}