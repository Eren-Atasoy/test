

void    ft_ultimate_div_mod(int *a, int *b)
{
    int temp;

    temp = *a / *b;
    *b = *a % *b;
    *a = temp;
}
/*
int main(void)
{
    int a = 31;
    int b = 10;
    printf("%d\n", a);
    printf("%d\n", b);
    ft_ultimate_div_mod(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);

}*/