#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main (void)
{
    char stirng[] = "helloworld";
    int result;
     
    result = ft_str_is_lowercase(stirng);

    printf("result: %d",result);

}

int ft_str_is_lowercase(char *str)
{
    int i = 0;

    if (str == NULL)
    {
        return 1;
    }
    
    while (str[i])
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
            return 0;
        i++;
    
    }
    return 1;
    
    
}