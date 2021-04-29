char	*ft_strrchr(char* str, int c)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		if (str[i] == c)
			break;
		i--;
	}
	return (&str[i]);
}
