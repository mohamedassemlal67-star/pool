#include <unistd.h>

void ft_print_alpha (void);

int main (void)
{
    ft_print_alpha ();
}

void ft_print_alpha (void)
{
    char letter;
    for ( letter = 'a';letter <= 'z'; letter++)
    {
        write(1, &letter, 1);
    }
    
}