#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((char)c >= 'a' && (char)c <= 'z')
		return (2);
	else if ((char)c >= 'A' && (char)c <= 'Z')
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
