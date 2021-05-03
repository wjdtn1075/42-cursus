void	*ft_memcpy(void *dest, void *src, int c, int n)
{
	int		i;
	unsigned char	*src1;
	unsigned char	*dest1;

	i = 0;
	src1 = (unsigned char*)src;
	dest1 = (unsigned char*)dest;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
		if (src1[i] == c)
		{
			break;
		}
	}
	return dest;
}
