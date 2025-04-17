#include <unistd.h>
void    ft_ft(int *nbr)
{
    *nbr = 42 ;
}

int main()
{
    int a;
    int *nbr = &a;
    ft_ft(nbr);

    write(1,&(a/10+48),1);



}