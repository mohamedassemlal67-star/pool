#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main (void)
{
    int result = ft_recursive_power(2, 3);
    printf("result: %d\n", result);
    return 0;
}

int ft_recursive_power(int nb, int power)
{
    // If power is negative, return 0
    // (42 convention: negative exponents are not handled)
    if (power < 0)
        return 0;

    // Base case:
    // Any number raised to power 0 equals 1
    // Example: 5^0 = 1
    if (power == 0)
        return 1;

    // Recursive case:
    // Multiply nb by the result of nb^(power - 1)
    // Example: 2^3 = 2 * 2^2
    return (nb * ft_recursive_power(nb, power - 1));
}