#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int i=0;
        while(i<size)
        {
            tab[i] = tab[size];
            i++;
            size--;
        }

}


int main()
{
    int size = 3;
    int *tab = {1, 2, 3};
    int test = 0;
    while (test<size)
    {
        printf("%p",tab[test]);
        test++;
    }
    test = 0;

    ft_rev_int_tab(tab, size);

    while (test < size)
    {
        printf("\n%p",tab[test]);
        size--;
    }

}