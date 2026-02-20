#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main (void)
{
    int array[] = {1,2,3,4,5,6,7,8,9,};
    int lenght = 9;

    ft_rev_int_tab(array, lenght);
    
    for (int j = 0; j < lenght; j++)
    {
        printf("the array[%d] = %d\n", j, array[j]);
    }
    
}

void ft_rev_int_tab(int *tab, int size)
{
    int temp = 0;

     for (int i = 0; i < (size / 2) ; i++)
    {
        temp = tab[i];
        
        tab[i] = tab[size - i - 1];

        tab[size - i - 1] = temp;
    }
}