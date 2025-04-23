char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *str;
	str = dest;
	int	i;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	int	j;
	j = 0;
	while (nb)
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
	}
	dest[i] = '\0';
	return (str);
}
