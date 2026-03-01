#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main (void)
{
    char dest[20] = "hello";
    char src[] = " world!!";

    char *result = ft_strncat(dest, src, 3);

    printf("result: %s", result);

}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i = 0;
    unsigned int j = 0;
    
    while (dest[i])
    {
        i++;
    }
    while (src[j] && j <= nb)
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    return dest;

}