char	*ft_strnstr(char *src, char *want_find, int len)
{
	int i;
	int j;
	if (*want_find == 0)
		return (&src[i]);
	i = 0;
	while (*src != '\0' &&  i < len)
	{
		j = 0;
		while (src[i + j] == want_find[j] && i + j < len)
		{
				j++;
				if (j == (ft_strlen(want_find) - 1))
					return (&src[i]); 
		}
		i++;
	}
}
