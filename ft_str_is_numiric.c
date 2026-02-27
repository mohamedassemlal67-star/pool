#include <stdio.h>

int ft_str_is_numeric(char *str);

int main (void)
{
    char string[] = "12345 6789";
    int result;

    result = ft_str_is_numeric(string);
    printf("result: %d",result);
}

int ft_str_is_numeric(char *str)
{

    int i = 0;

    if (str == NULL)
        return 0;

    while (str[i])
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return 0;
        i++;
    }
    return 1;

    
}