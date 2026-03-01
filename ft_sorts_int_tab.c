#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main (void)
{
    int array[] = {7,1,3,5,9,8,2};
    int length = 7;

    ft_sort_int_tab(array,length);

    for (int i = 0; i < length; i++)
    {
        printf("%d", array[-i]);
    }
    


}

void ft_sort_int_tab(int *tab, int size)
{
    int temp = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (tab[j] < tab[j + 1])
            {
                temp = tab[j];

                tab[j] = tab[j + 1];

                tab[j + 1] = temp;
            }
            
        }
        
    }
    
}