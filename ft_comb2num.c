#include <unistd.h>

void ft_comb2num ();

int main (void)
{
    ft_comb2num();
    return (0);
}

void ft_putchar (char c)
{
    write (1, &c, 1);
}

void ft_convert (int n)
{
    ft_putchar ((n / 10) + '0');
    ft_putchar ((n % 10) + '0');
}

void ft_comb2num (void)
{
    int  a,b;
    for ( a = 0; a <= 98; a++)
    {
        for ( b = a + 1; b <= 98; b++)
        {
            if (!(a == 98 && b == 99))
            {
                ft_convert (a);
                ft_putchar (' ');
                ft_convert (b);
                ft_putchar (',');   
                ft_putchar (' ');
            }
            
        }
        
    }
    
}


