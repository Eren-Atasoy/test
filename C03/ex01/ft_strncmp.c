

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	i =0;
	while(n)
	{
		if(s1[i] != s2[i])
		{
			return s1[i] - s2[i];
		}
		n--;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
     char *cp1 = "Bilgisayar";
     char *cp2 = "Bil";
    int ret;

    ret = ft_strncmp(cp1, cp2, 5);

    if(ret<0) printf("cp1 karakter dizisi cp2 karakter dizisinden küçüktür!");
    else if(ret>0) printf("cp2 karakter dizisi cp1 karakter dizisinden küçüktür!");
    else printf("cp1 karakter dizisi cp2 karakter dizisine eşittir!");

    return 0;
}*/
