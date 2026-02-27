#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main (void)
{
    char s1[] = "hello";
    char s2[] = "hel";

    int result = ft_strncmp(s1, s2, 0);
    printf("result: %d", result);
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;

    if (n == 0)
        return 0;

    while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
    {
        i++;
    }
    return s1[i] - s2[i];
    
}