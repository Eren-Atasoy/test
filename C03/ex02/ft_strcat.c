char *ft_strcat(char *dest, char *src)
{
	char *str = dest;
	int	i;
	i = 0;
	while(dest[i] != '\0')
	{
		i++;
	
	}
	int	j;
	j = 0;
	while(src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
	char arr[] = "denem";
	char test[] = " sorun";
	ft_strcat(arr,test);
	printf( "%s",arr);
} */
