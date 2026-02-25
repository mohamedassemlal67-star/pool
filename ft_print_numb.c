#include <unistd.h>

void ft_print_numbr (void);

int main (void)
{
    ft_print_numbr ();
    return (0);
}

void ft_print_numbr (void)
{
    char c;
    for ( c = '0'; c <= '9'; c++)
    {
        write (1, &c, 1);
    }
    
}