#include <stdio.h>

int ft_fibonacci(int index);

int main (void)
{
    int res = ft_fibonacci(8);
    printf("the result: %d\n", res);
    return 0;
}

int ft_fibonacci(int index)
{
    if (index < 0)
    {
        return -1;
    }
    else if (index == 0)
    {
        return 0;
    }
    else if (index == 1)
    {
        return 1;
    }

    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}