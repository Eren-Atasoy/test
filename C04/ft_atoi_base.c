

int is_check_base(char *base)
{
    int i;
    int j;

    i = 0;
    while(base[i])
    {
        if(base[i] == '+' || base[i] == '-')
        {
            return(0);    
        }
        j = i + 1;
        while(base[j])
        {
            if(base[i] == base[j])
                return(0);
            j++;
        }
        i++;
    }
    if(i < 2)
        return(0);

    return(1);
}
int is_in_base(char a,char *base)
{
    int     i;

    i = 0;

    while(base[i])
    {
        if(base[i] == a)
        {
            return (1);
        }
        i++;
    }
    return(0);
}

int ft_converter(char *str,char *base,int base_lenght,int index)
{
    int result;

    result = 0;
    while (is_in_base(str[index], base))
    {
        result = result * base_lenght + index;
    }
    return (result);
}

int ft_atoi_base(char *str,char *base)
{
    int base_lenght;
    int i;
    int sign;
    
    i = 0;
    sign = 1;
    base_lenght = 0;

    if(is_check_base(base))
    {
        while(base[base_lenght])
            base_lenght++;
        while((9 <= str[i] && str[i] <= 13) || str[i] == ' ')
            i++;
        while (str[i] !='\0')
        {
            if(str[i] == '+' || str[i] == '-')
                sign = sign * -1;
            i++;
        }
        return(ft_converter(str,base,base_lenght,i) * sign);
    }
    return (0);
}
#include <stdio.h>
int main()
{
    printf("%d",ft_atoi_base(" ---+--+1234ab567","0123456789"));

}

