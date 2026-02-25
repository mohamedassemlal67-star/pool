#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main (void)
{
    char src[] = "copy path";
    char dest[100];

    ft_strcpy(dest, src);

    printf("sourc: %s\n",src);
    printf("destination: %s\n", dest);
}

char *ft_strcpy(char *dest, char *src)
{
    if (dest == NULL) return NULL; //that means we past bad  pointer or memorey was never allocated 

    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;

}