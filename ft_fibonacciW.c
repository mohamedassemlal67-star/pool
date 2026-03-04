#include <stdio.h>

int ft_fibonacciW(int index);

int main (void)
{
    int res = ft_fibonacciW(8);
    printf("the result: %d\n", res);
    return 0;
}

int ft_fibonacciW(int index)
{
    int a = 0;      // Represents F(0)
    int b = 1;      // Represents F(1)
    int temp;       // Temporary variable to store next value

    if (index < 0)    // If index is negative, return -1 (error case)
    {
        return -1;
    }
    else if (index == 0) // Base case: Fibonacci(0) = 0
    {
        return 0;
    }
    else if (index == 1)    // Base case: Fibonacci(1) = 1
    {
        return 1;
    }
    while (index > 1) // Loop to calculate Fibonacci iteratively
    // Each iteration moves forward one position in the sequence
    {
    temp = a + b;   // Compute next Fibonacci number
        a = b;          // Move 'a' forward
        b = temp;       // Move 'b' forward
        index--;        // Decrease index until we reach position 1
    }
    return b;    // Return the Fibonacci value at the requested index
}