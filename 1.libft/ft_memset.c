void*	my_memset(void* str, int value, int num)
{
	int		i;
	char*		s_ptr;
	unsigned char	val;

	s_ptr = (char*) str;
	val = (unsigned int) value;
	i = 0;
	while (i < num)
	{
		s_ptr[i] = value;
		i++;
	}
	return (str);
}
