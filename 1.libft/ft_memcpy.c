void	*ft_memcpy(void *dest, void *src, int num)
{
	char	*src1;
	char	*dest1;
	int	i;

	i = 0;
	if (!dest && !src)
		return (0);
	src1 = (unsigned char*)src;
	dest1 = (unsigned char*)dest;
	while(i < num)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
