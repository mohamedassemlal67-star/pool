#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main (void)
{
    char string[] = "HELLOWORLD";
    int result;

    result = ft_str_is_uppercase(string);

    printf("result: %d",result);

}

int ft_str_is_uppercase(char *str)
{

    int i = 0;
    while (str[i])
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
            return 0;
        i++;
        
    }
    return 1;
    
}