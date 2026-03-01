#include <stdio.h>

char *ft_strcapitalize(char *str);

int main (void)
{
    char string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    ft_strcapitalize(string);

    printf("result: %s", string);

}

char *ft_strcapitalize(char *str)
{
    int i = 0;

    while (str[i])// Iterate until the null terminator
    {
        if (str[i] >= 'A' && str[i] <= 'Z')// check if the current character is upcase
        {
            str[i] = str[i] + 32;// convert to lowercase using the ASCII deffrence
        }
        if ((str[i] >= 'a' && str[i] <= 'z') && str[i - 1] <= 47)// Check if the character is a lowercase letter and Is the previous character NOT alphanumeric
        {
            str[i] = str[i] - 32;// convert to upcase using the ASCII deffrence
        }
        i++;
        
    }
    return str;
}