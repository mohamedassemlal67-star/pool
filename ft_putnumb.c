#include <unistd.h>

void ft_putnumb (int nb);

int main (void)
{
    ft_putnumb (42);
}

void ft_putchar (char c)
{
    write (1, &c, 1);
}

void ft_convert (int nb)
{
    ft_putchar ((nb / 10 ) + '0');
    ft_putchar ((nb % 10 ) + '0');
}

void ft_putnumb (int nb)
{
    ft_convert (nb);
}