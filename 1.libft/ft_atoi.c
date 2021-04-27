int ft_atoi(char *str)
{
	int sign;
	int result;

	sign = 1;
	result = 0;

	while(*str)
	{
		if((*str >= 9 && *str <= 13) || *str == 32)
			str++;
		else if(*str == '+' || *str == '-')
		{
			if(*str == '-')
			{
				sign *= -1;
				}
			str++;
		}
		else if(*str >= '0' && *str <= '9')
		{
			result = result * 10 + *str - '0';
			str++;
		}
		else
			break;
	}
	return (sign * result);
}
