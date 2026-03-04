#include <stdio.h>

int ft_iterative_factorial(int nb);

int main (void)
{
    int res = ft_iterative_factorial(4);
    printf("result: %d", res);
}

int ft_iterative_factorial(int nb)
{
    int i = 1;        // Counter used for multiplication (starts at 1)
    int result = 1;   // Stores the factorial result (initialized to 1)
    if (nb < 0)   // Check if number is negative
    {
        return 0; // Factorial is not defined for negative numbers
    }
      // Multiply all numbers from 1 up to nb
    while (i <= nb)
    {
        result *= i;  // result = result * i
        i++;          // Move to next number
    }
    return result;// Return the final factorial value
}