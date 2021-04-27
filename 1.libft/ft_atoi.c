int ft_atoi(char *str)
{
	int sign;
	int result;

	while(*str++)
	{
		if(*str == '+' || *str == '-')
		{
			if(*str == '-')
1
}
int main()
{
	char str[] = "-486";
	printf("%d", ft_atoi(str));
}
