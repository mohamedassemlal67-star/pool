#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main (void)
{
    char string[] = " world";
    char destination[20] = "hello";

    unsigned int result = ft_strlcat(destination, string, 20);
    printf("destination: %s\n", destination);
    printf("result: %d",result);

}

unsigned int ft_strlen(char *str)
{
    unsigned int i = 0;

    while (str[i])
    {
        i++;
    }
    return i;
    
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    
    unsigned int i = ft_strlen(dest);
    unsigned int j = ft_strlen(src);
    unsigned int k;

    if (size <= i)
    {
        return size + j;
    }
    
    k = 0;

    while (src[k] && k + i < size - 1)
    {
        dest[i + k] = src[k];
        k++;
    }
    dest[i + k] = '\0';
    
    return i + j;
}