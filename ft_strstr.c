#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main (void)
{
    char str[] = "Hello World";
    char to_find[] = "abcd";

    char *result = ft_strstr(str, to_find);
    printf("result: %s", result);

}

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    /* If to_find is empty, return the original string */
    if (to_find[0] == '\0')
        return str;

    i = 0;

    /* Loop through each character of str */
    while (str[i])
    {
        j = 0;  // Reset j for each new starting position

        /* Compare substring starting at str[i] */
        while (str[i + j] && to_find[j]
               && str[i + j] == to_find[j])
        {
            j++;
        }

        /* If we reached end of to_find,
           it means the substring was found */
        if (to_find[j] == '\0')
            return (str + i);

        /* Move to next position in str */
        i++;
    }

    /* If no match is found, return NULL */
    return NULL;
}