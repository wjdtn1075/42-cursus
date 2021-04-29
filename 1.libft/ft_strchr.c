char	*ft_strchr(char *str, int c)
{

	int i;

	i = 0;
	if (str[i] != '\0')
	{
		while (str[i])
		{
			if (str[i] == c)
				break;
			i++;
		}
		
	}
	return (&str[i]);
}
