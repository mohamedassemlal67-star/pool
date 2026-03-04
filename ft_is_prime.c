#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
    int res = ft_is_prime(8);
    printf("result: %d",res);
    return 0;
}

int ft_is_prime(int nb)
{
    if(nb == 0 || nb == 1) return 0; // Numbers less than or equal to 1 are not prime

    int i = 2;

    while (i < nb) // Check divisibility from 2 to nb - 1
    {
        if (nb % i == 0)// If nb is divisible by i, it is not prime
        {
            return 0;
        }
        i++;
        
    }
    // If no divisors were found, number is prime
    return 1;
    
}