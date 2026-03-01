#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main (void)
{
    char dest[20] = "hello";
    char src[] = " world!!";

    char *result = ft_strcat(dest, src);

    printf("result: %s", result);

}

char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    while (dest[i])
    {
        i++;
    }
    while (src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}