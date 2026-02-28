#include <unistd.h>

void ft_putstr(char *str);

int main (void)
{
    char string[] = "hello world";

    ft_putstr(string);
}

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    
}