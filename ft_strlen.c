#include <stdio.h>

int ft_strlen(char *str);

int main (void)
{
    char string[] = "hello world";
    int result = ft_strlen(string);

    printf("result: %d", result);

}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
    
}