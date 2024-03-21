#include "ft_printf.h"
char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = c;
	while (*s)
	{
		if (*s == a)
			return ((char *) s);
		s++;
	}
	if (a == '\0')
		return ((char *)s);
	return (0);
}

size_t	ft_putchar(char c)
{
		write(1, &c, 1);
		return (1);
}

size_t	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
