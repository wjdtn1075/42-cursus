void	*ft_bzero(void* str, int n)
{
	int i;
	unsigned char *s_addr;

	i = 0;
	s_addr = (unsigned char *)str;
	while (i < n)
	{
		s_addr[i] = 0;
		i++;
	}
}
