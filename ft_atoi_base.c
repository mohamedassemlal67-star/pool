#include <stdio.h>
#include <unistd.h>

int ft_atoi_base(char *str, char *base);
int ft_check_base(char *base);

int main (void)
{
    printf("%d\n", ft_atoi_base("101", "01"));
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_check_base (char *base)
{
    int i = 0;
    int j;

    if (base[0] == '\0' || base[1] == '\0')
    {
        return 0;
    }

    while (base[i])
    {
        j = 0;
        while (base[j])
        {
            if (i != j && base[i] == base[j])
            {
                return 0;
            }
            j++;
            
        }
        if (base[i] == '+' || base[i] == '-')
        {
            return 0;
        }
        if (base[i] < 32 || base[i] > 126)
        {
            return 0;
        }
        i++;
        
    }
    return 1;
}

int ft_atoi_base(char *str, char *base)
{
    int i = 0;              // Index to move inside the input string
    int base_size = 0;      // Length of the base
    int sign = 1;           // Sign of the number (1 or -1)
    int result = 0;         // Final converted result
    int j;                  // Index for searching inside base
    int digit;              // Stores the numeric value of current character

    // Check if base is valid
    if (!ft_check_base(base))
        return 0;

    // Calculate base length
    while (base[base_size])
        base_size++;

    // Skip whitespace characters (space, tab, newline, etc.)
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;

    // Handle multiple '+' and '-' signs
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;     // Change sign if '-' is found
        i++;
    }

    // Convert characters while they exist in base
    while (str[i])
    {
        j = 0;
        digit = -1;         // Assume character is not valid

        // Search for current character inside base
        while (base[j])
        {
            if (base[j] == str[i])
            {
                digit = j;  // If found, its index is the digit value
                break;
            }
            j++;
        }

        // If character is not found in base → stop conversion
        if (digit == -1)
            break;

        // Multiply previous result by base size and add new digit
        result = result * base_size + digit;

        i++;
    }

    // Return final result with correct sign
    return result * sign;
}