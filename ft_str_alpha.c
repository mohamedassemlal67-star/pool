#include <stdio.h>

int ft_str_is_alpha(char *str);

int main (void)
{
    char string[] = "helloworld";
    int result;

    result = ft_str_is_alpha(string);
    printf("Result: %d\n", result);
    return 0;
}

int ft_str_is_alpha(char *str)
{
    int i = 0;

    if (str == NULL)
        return 0;
    while (str[i])
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
        {
            return 0;
        }
        i++;
    }
    return 1;
}