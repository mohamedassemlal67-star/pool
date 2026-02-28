#include <stdio.h>

int ft_atoi(char *str);

int main (void)
{
    char string[] = " ----+--+1234ab567";
    int result = ft_atoi(string);

    printf("result: %d", result);

}

int ft_atoi(char *str)
{
    int i = 0;       // Index to move inside the string
    int res = 0;     // Final result number
    int sing = 1;    // Sign of the number (1 = positive, -1 = negative)

    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))//this loop skips all whitespace characters.
    {
        i++;
    }
    while (str[i] == '-' || str[i] == '+')//handel the + and - case
    {
        if (str[i] == '-')
        {
            sing = sing * (-1);
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')//convert from charachter to numbers
    {
        // Multiply current result by 10 to make space for next digit,
        // then convert current character from ASCII to integer
        // by subtracting '0', and add it to the result
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return res * sing;
    
}