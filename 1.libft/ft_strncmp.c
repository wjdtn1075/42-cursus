int	ft_strncmp(char *str1, char *str2, int len)
{
	int i;

	i = 0;
	while((str1[i] != '\0' || str2[i] !='\0') && i < len - 1)
	{
		if (str1[i] != str2[i])
			break;	
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
