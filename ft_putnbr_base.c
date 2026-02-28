#include <unistd.h>

void ft_putnbr_base(int nbr, char *base);

int main (void)
{
    ft_putnbr_base(8, "0123456789abcdef");
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_check_base(char *base)
{
    int i = 0;
    int j; 

    if (base[0] == '\0' || base[1] == '\0') // Base must contain at least 2 characters
    
        return 0;

    while (base[i]) // Loop through each character of base
    {
        j = 0;
        while (base[j])  // Check for duplicate characters
        {
            if (i != j && base[i] == base[j]) // Invalid if duplicate found
            {
                return 0;
            }
            j++;
        }
        if (base[i] == '+' || base[i] == '-')// Base cannot contain '+' or '-'
        {
           return 0;
        }
        if (base[i] < 32 || base[i] > 126) // Base cannot contain non-printable characters
        {
           return 0;
        }
        i++;
        
    }
    return 1;  // Base is valid
    
}

void ft_putnbr_base(int nbr, char *base)
{
    int i = 0;             // Index for storing digits
    int base_size = 0;     // Length of base
    int nbr_str[500];      // Array to store converted digits (as indexes)

    if (ft_check_base(base)) // Check if base is valid before continuing
    {
        if (nbr < 0) // If number is negative
        {
            nbr = -nbr;         // Make it positive
            ft_putchar('-');    // Print negative sign
        }
        while (base[base_size]) // Calculate base length
        {
            base_size++;
        }
        while (nbr) // Convert number to base
        // Store remainders (digits) in array
        {
            nbr_str[i] = nbr % base_size;  // Get remainder (digit index)
            nbr = nbr / base_size;         // Divide number
            i++;                           // Move to next position
        }
        while (i-- > 0)        // Print digits in reverse order
        // Because remainders are stored from least significant digit
        {
            ft_putchar(base[nbr_str[i]]); // Print corresponding base character
        }
        
    }
    
}