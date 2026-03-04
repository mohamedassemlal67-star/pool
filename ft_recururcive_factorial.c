#include <stdio.h>

int ft_recursive_factorial(int nb);

int main (void)
{
    int res = ft_recursive_factorial(5);
    printf("result: %d", res);
}


int ft_recursive_factorial(int nb)
{
    // Base case: when nb is 1, stop recursion
    if (nb == 1 || nb <= 0)
        return 1;

    // Recursive case:
    // Multiply current number by factorial of (nb - 1)
    return nb * ft_recursive_factorial(nb - 1);
    // Example: 5! = 5 * 4!
}