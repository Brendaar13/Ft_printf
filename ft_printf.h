#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_unputnbr(unsigned int n);
int	hexa(unsigned long n, char *hex);
int	ft_ptr(int *ptr);
int	ft_printf(char const *str, ...);

#endif
