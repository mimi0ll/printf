#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_string(va_list *args);
int	ft_char(va_list *args);
int	ft_unsigned(va_list *args);
int	ft_int(va_list *args);
int	ft_hex(va_list *args, int uppercase);
int	ft_pointer(va_list *args);
int	ft_percent(void);

#endif