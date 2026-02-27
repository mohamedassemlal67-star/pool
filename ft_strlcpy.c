#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main (void)
{
    char source[] = "hello world";
    char destination[10];

    ft_strlcpy(destination, source, 6);

    printf("source: %s\n", source);
    printf("destination: %s", destination);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    unsigned int lenght = 0;

    while (src[lenght])  // Calculate the full length of the source string
        lenght++;

    if (size > 0)// If there is space in destination buffer
    {
        while (i < size - 1 && src[i])// Copy at most (size - 1) characters
        // to leave space for the null terminator
    
        {
            dest[i] = src[i];  
            i++;
        }
        dest[i] = '\0';// Null-terminate the destination string
        
    }
      // Return the total length of src
    // (used to detect truncation)
    return lenght;
    

}