#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (2);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
int main(void)
{
	printf("%d", ft_isalpha('a'));
	printf("%d", ft_isalpha('A'));
	printf("%d", ft_isalpha(' '));
}
