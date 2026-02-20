#include <stdio.h>

void ft_swap(int *a, int *b);

int main (void)
{
    int x = 7;
    int y = 14;
    printf("befor swapping x = %d, y = %d\n", x, y);

    ft_swap(&x, &y);

    printf("after swapping x = %d, y = %d", x, y);

}

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;

    *a = *b;

    *b = temp;
}