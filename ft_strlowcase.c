#include <stdio.h>

char *ft_strlowcase(char *str);

int main (void)
{
    char string[] = "HELLO WORLD";

    ft_strlowcase(string);

    printf("result: %s",string);
}

char *ft_strlowcase(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
    
}