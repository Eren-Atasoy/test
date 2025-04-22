
#include <unistd.h>

void ft_putchar(char x)
{
    write(1,&x,1);
}
void ft_convert_hex(char str)
{
    ft_putchar('\\');
    ft_putchar("0123456789abcdef"[str/16]);
    ft_putchar("0123456789abcdef"[str%16]);

}
void ft_putstr_non_printable(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        if(0<=str[i] && str[i]<=31)
        {
            ft_convert_hex(str[i]);

        }
        else
        {
            ft_putchar(str[i]);
        }
        i++;
    }

}