#include "ft_printf.h"

size_t	print_cexit(const char c, va_list s)
{
	size_t	c_printed;
	char	*low_hex;
	char	*up_hex;

	c_printed = 0;
	low_hex = "0123456789abcdef";
	up_hex = "0123456789ABCDEF";

	if (c == 'c')
		c_printed += ft_putchar(s, int);
	if (c == '%')
		c_printed += ft_putchar('%');
	if (c == 's')
		c_printed += ft_putstr(va_arg(s, char *);
	if (c == 'd' || c == 'i')
		c_printed += ft_base(va_arg(s, int), "0123456789", 10, c);
	if (c == 'u')
		c_printed += ft_base(va_arg(s, unsigned) "0123456789", 10, c);
	if (c == 'x')
		c_printed += ft_base(va_arg(s, unsigned), low_hex, 16, c);
	if (c == 'X')
		c_printed += ft_base(va_arg(s, unsigned), up_hex, 16, c);
	if (c == 'p')
		c_printed += ft_base(va_arg(s, long), low_hex, 16, c);
	return (c_printed);
}

int	ft_printf(char const *str, ...)
{
	size_t	i;
	size_t	c_printed;
	va_list	s;
	char	*c_exit;

	i = 0;
	c_printed = 0;
	va_start (s, str);
	c_exit = "cspdiuxX%";


}
