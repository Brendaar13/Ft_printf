#include "ft_printf.h"

int     ft_putnbr(int n)
{
        int     r;

        r = 0;
        if (n < 0)
        {
                if (n == -2147483648)
                {
                        r += write(1, "-2", 2);
                        n = 147483648;
                }
                else
                {
                        r += ft_putchar('-');
                        n = -n;
                }
        }
        if (n > 9)
                r += ft_neputnbr(n / 10);
        r += ft_putchar(n % 10 + 48);
        return (r);
}

int     ft_neputnbr(unsigned int n)
{
        int     u;

        u = 0;
        if (n > 9)
                u += ft_neputnbr(n / 10);
        u += ft_putchar(n % 10 + 48);
        return (u);
}

int     hexa(unsigned long n, char *hex)
{
        int     i;

        i = 0;
        if (n >= 16)
                i += hexa((n / 16), hex);
        i += write(1, hex + (n % 16), 1);
        return (i);
}

int	ft_put_ptr(int *ptr)
{
	int	i;
        char    *hex;

        hex = "0123456789abcdef";
	i = 2;
	if (!ptr)
                return (ft_putstr("(nil)"));
        ft_putchar('0');
        ft_putchar('x');
        
	i += hexa((unsigned long)ptr, hex);
	return (i);
}
