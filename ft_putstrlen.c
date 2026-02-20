#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str);

int main (void)
{
    char phrase [] = "Hay my name is Mohamed Assemlal!!";

    int len = ft_strlen(phrase);

    printf("Length = %d\n", len);
}

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return i;
    

}