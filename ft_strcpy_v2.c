#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main (void)
{
    char source[] = "my name is IGOR!!";
    char destination[50];

    ft_strcpy(destination, source);

    printf("destination: %s\n", destination);
    printf("source: %s\n", source);


}

char *ft_strcpy(char *dest, char *src)
{
    
    if (dest == NULL) return NULL;    //that means we past a wronge pointer or the memorey never allocated
    
    int i = 0;
    
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
    
    
}