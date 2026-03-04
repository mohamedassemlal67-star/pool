#include <stdio.h>   // Allows use of printf

int ft_sqrt(int nb); // Function prototype

int main (void)
{
    int res = ft_sqrt(8);          
    printf("result: %d", res);     // Expected result: 3
    return 0;                      // End program successfully
}

int ft_sqrt(int nb)
{
    // If number is negative or zero, return 0
    // (In 42 convention, 0 returns 0 and negatives return 0)
    if (nb < 0 || nb == 0)
    {
        return 0;
    }

    int i = 1;      // Start checking from 1
    int res;        // Variable to store i * i

    // Loop while i is less than or equal to nb
    while (i <= nb)
    {
        res = i * i;   // Calculate square of i

        // If square equals the number, we found exact square root
        if (res == nb)
        {
            return i;  // Return the integer square root
        }

        i++;           // Move to next number
    }

    // If no exact square root was found, return 0
    return 0;
}