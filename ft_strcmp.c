#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main (void)
{
    char s1[] = "hello";
    char s2[] = "hello";

    int result = ft_strcmp(s1 , s2);

    printf("result: %d", result);

}

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;

    return s1[i] - s2[i];
}