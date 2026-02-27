#include <stdio.h>

char *ft_strupcase(char *str);

int main (void)
{
    char string[] = "hello world";
    ft_strupcase(string);
    
    printf("result: %s",string );
}

char *ft_strupcase(char *str)
{
    int i = 0 ;

    while (str[i])// Iterate until the null terminator
    {
        if (str[i] >= 'a' && str[i] <= 'z') // Check if the character is a lowercase letter
        {
            str[i] = str[i] - 32;// Convert to uppercase using ASCII difference
            // Alternatively: str[i] = str[i] + ('A' - 'a');
            
        }
        i++;
        
    }
    return (str); // Return a pointer to the modified string
}