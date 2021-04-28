int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	ft_strlcpy(char *dest, char *src, int len)
{
	int i;

	i = 0;
	if(len == 0)
		return(ft_strlen(src));
	if(!dest)
		return (0);
	while (i < len - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] == '\0';
	return(ft_strlen(src));
}
