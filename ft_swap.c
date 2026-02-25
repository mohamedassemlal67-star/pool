#include <stdio.h>

void ft_swap(int *a, int *b);

int main (void)
{
    int a = 2;
    int b = 7;

    ft_swap (&a, &b);

    printf("the result of a is %d and of b is %d",a , b);

}

void ft_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;

    *b = temp;

}