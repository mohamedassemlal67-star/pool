#include <unistd.h>

void ft_putstr(char *str);

int main (void)
{
<<<<<<< HEAD
    char string[] = "hello world";

    ft_putstr(string);
=======
    char phrase [] = "Hay my name is Mohamed Assemlal";

    ft_putstr(phrase);

>>>>>>> c109bf0c095a0754b1dfa8d139f27e1084c22a03
}

void ft_putstr(char *str)
{
    int i = 0;
<<<<<<< HEAD
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
=======

    while (str[i] != '\0')
    {
        write(1, &str[i], 1);    
        ++i;
>>>>>>> c109bf0c095a0754b1dfa8d139f27e1084c22a03
    }
    
}