#include <stdio.h>
char *ft_strcapitalize(char *str)
{
    int i;
    i = 0;
    if('a'<=str[i] && str[i] <= 'z')
        str[i] = str[i]-32;
    i++;    
    while(str[i] !='\0')
    {
        if(!(('a'<=str[i-1] && str[i-1]<='z') 
        || ('A'<=str[i-1] && str[i-1]<='Z') 
        || ('0'<=str[i-1] && str[i-1]<='9')))
        {
            if('a'<=str[i] && str[i]<='z')
            {
                str[i] = str[i]-32;
            }
        
        
        }
        else if('A' <= str[i] && str[i]<= 'Z')
        {
                str[i] = str[i]+32;
        }
        i++;
    
        
    }
    return(str);
}
/*
int main()
{
    char arr[]= "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("before:%s\n",arr);
    ft_strcapitalize(arr);
    printf("after:%s",arr);
}*/
