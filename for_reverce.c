#include <unistd.h>

void ft_print_reverce_alpha (void);

int main (void)
{
    ft_print_reverce_alpha();
    return (0);
}

void ft_print_reverce_alpha (void)
{
    char letter;
    for ( letter = 'z'; letter >= 'a'; letter--)
    {
        write(1, &letter, 1);
    }
    
}