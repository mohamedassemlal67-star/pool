#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main (void)
{
   char source[] = "abcdef";
   char buffer[10];

   for (int i = 0; i < 10; i++)
   {
        buffer[i] = '#';
   }
   
   ft_strncpy(buffer, source, 4);

   printf("buffer: %s\n", buffer);

   for (int i = 0; i < 10 ; i++)
   {
        if (buffer[i] == '\0')
        {
            printf("buffer[%d] = \\0\n", i);
        }
        else
        {
            printf("buffer[%d] = %c\n", i, buffer[i]);
        }
        
        
   }
   

}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    if (dest == NULL || src == NULL || n == 0)
    {
        return dest;
    }

    unsigned int i = 0;

    while (i < n && src[i] != '\0')
    {
        dest [i] = src [i];
        i++;
    }

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
    
    
    
}