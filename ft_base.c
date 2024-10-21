#include "ft_printf.h"

int	ft_putnbr(int num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		if (num == -2147483648)
		{
			count += write(1, "-2", 2);
			num = 147483648;
		}
		else
		{
			count += ft_putchar('-');
			num = -num;
		}
	}
	if (num > 9)
	{
		count += ft_unputnbr(num / 10);
		count += ft_putchar(num % 10 + 48);
	}
	return (count);
}

int	ft_unputnbr(unsigned int num)
{
	int	count;

	count = 0;
	if (num > 9)
	{
		count += ft_unputnbr(num / 10);
		count += ft_putchar(num % 10 + 48);
	}
	return (count);
}

int	hexa(unsigned long num, char *to_hex)
{
	int	i;

	i = 0;
	if (num >= 16)
	{
		i += hexa((num / 16), to_hex);
		i += write(1, to_hex + (n % 16), 1);
	}
	return (i);
}

int	ft_ptr(int *ptr)
{
	int	i;
	char	*to_hex;

	to_hex = "0123456789abcdef";
	i = 2;
	if (!ptr)
		return (ft_putstr("(nil)"));
	ft_putchar('0');
	ft_putchar('x');
	i += hexa((unsigned long)ptr, to_hex);
	return (i);
}
