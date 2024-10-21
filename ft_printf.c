#include "ft_printf.h"

int     print_cexit(char c, va_list s)
{
        int     c_printed;

        c_printed = 0;
        if (c == 'c')
                c_printed += ft_putchar(va_arg(s, int));
        if (c == '%')
                c_printed += ft_putchar('%');
        if (c == 's')
                c_printed += ft_putstr(va_arg(s, char *));
        if (c == 'd' || c == 'i')
                c_printed += (ft_putnbr(va_arg(s, int)));
        if (c == 'u')
                c_printed += (ft_unputnbr(va_arg(s, unsigned int)));
        if (c == 'x')
                c_printed += (hexa(va_arg(s, unsigned int), "0123456789abcdef"));
        if (c == 'X')
                c_printed += (hexa(va_arg(s, unsigned int), "0123456789ABCDEF"));
        if (c == 'p')
		c_printed += ft_put_ptr(va_arg(s, int *));
        return (c_printed);
}

int     ft_printf(char const *str, ...)
{
        int     i;
        int     c_printed;
        va_list s;

        i = 0;
        c_printed = 0;
        va_start(s, str);
        while (str[i] != '\0')
        {
                if (str[i] == '%')
                {
                        c_printed += print_cexit(str[i + 1], s);
                        //c_printed += write(1, "%%", 1);
                        i++;
                }
                else
                        c_printed += ft_putchar(str[i]);
                i++;
        }
        va_end(s);
        return (c_printed);
}
