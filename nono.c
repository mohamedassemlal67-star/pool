#include <unistd.h>

void ft_putchar (char c);

int main (void)
{
    ft_putchar ('H');

}

void ft_putchar (char c)
{
    write (1, &c, 1);
}