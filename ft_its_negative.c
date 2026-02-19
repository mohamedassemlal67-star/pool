#include <unistd.h>

void its_negative (int n);

int main (void)
{
    its_negative (-5);
    return (0);
}

void its_negative (int n)
{
    if (n >= 0)
    {
        write (1, "P", 1);
    }
    else
    {
        write (1, "N", 1);
    }
    
}