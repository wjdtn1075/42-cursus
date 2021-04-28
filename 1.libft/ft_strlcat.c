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

int	ft_strlcat(char *dest, char *src, int size)
{
	int i;
	int dest_index;
	int src_index;

	i = 0;
	dest_index = ft_strlen(dest);
	if (size < dest_index)
		return(ft_strlen(src) + size);
	else if (size > dest_index)
	{
		while (dest_index + i < size && src[i])
		{
			dest[dest_index + i] = src[i];
			i++;
		}
		dest[dest_index + i] == '\0';
		return (ft_strlen(src) + dest_index);
	}

}
