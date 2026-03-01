#include <stdio.h>

int ft_str_is_printable(char *str);

int main (void)
{

    char string[] = "HelloWorld!!\n";

    
    int result = ft_str_is_printable(string);

    printf("result: %d", result);
}

int ft_str_is_printable(char *str)
{
    int i = 0;

    while (str[i])
    {
        if(!(str[i] >= ' ' && str[i] <= '~'))
            return 0;
        i++;
    }
    return 1;
    
}