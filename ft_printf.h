#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>

char 	*ft_strchr(const char *s, int c);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *s);
size_t ft_base(size_t num, char *ptr, size_t base, char c_exit);
int		ft_printf(char const *,);

#endif
