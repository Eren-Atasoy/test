#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    i = 1;
    int j;
    int temp;

    while(i<size)
    {   
        temp = tab[i];
        j = i-1;
        while(j>=0 && tab[j]>temp)
        {
        
            tab[j+1] = tab[j];
            j--;
         
        }
        tab[j+1] = temp;
        i++;


    }

}

int main()
{
    
    int arr[] = {23 ,12,31,179,3};
    int *ptr= arr;
    ft_sort_int_tab(ptr,5);
    int i = 0;
    while(i<5)
    {
        printf("%d",ptr[i]);
        i++;
    }
    return 0;
}