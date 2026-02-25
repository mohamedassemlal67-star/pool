#include <unistd.h>

void ft_print_reverce_alphabet(void);

int main(void)
{
    ft_print_reverce_alphabet();
}

void ft_print_reverce_alphabet(void)
{
    char alpha = 'z';

    while(alpha >= 'a')
    {
        write(1, &alpha, 1);
        alpha--;
    }
}