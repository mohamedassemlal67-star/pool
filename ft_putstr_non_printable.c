#include <unistd.h>

/*
** ft_putstr_non_printable
**
** Prints a string to standard output.
** Printable characters (ASCII 32–126) are printed normally.
** Non-printable characters are displayed as:
** \xx
** where "xx" is the lowercase hexadecimal value of the character.
*/

void ft_putstr_non_printable(char *str);

int main (void)
{
    char string[] = "hello\n world!";

    ft_putstr_non_printable(string);
    
}


void ft_putstr_non_printable(char *str)
{
    char *hex = "0123456789abcdef";    // Hexadecimal base used to convert numbers to hex characters
    int i = 0;

    while (str[i])// Iterate through the string until null terminator
    {
        if (str[i] >= 32 && str[i] <= 126) // If character is printable (ASCII 32 to 126)
        {
           write(1, &str[i], 1);   // Print character normally
        }
        else
        {
            char c = str[i];// Store current character

            write(1, "\\", 1); // Print backslash

            write(1,&hex[c / 16], 1);// Print first hexadecimal digit

            write(1,&hex[c % 16], 1);// Print second hexadecimal digit

        }
        i++;
        
    }
       
}