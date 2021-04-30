int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strnstr(char *src, char *want_find, int len)
{
	int i;
	int j;

	i = 0;
	while (*src != '\0' &&  i < len)
	{
		j = 0;
		if (*want_find == 0)
			return (&src[i]);
		while (src[i + j] == want_find[j] && i + j < len)
		{
				j++;
				if (j == ft_strlen(want_find))
					return (&src[i]); 
		}
		i++;
	}
}
