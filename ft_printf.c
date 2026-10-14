#include "ft_printf.h"

int	check(char conversion, va_list *args)
{
	if (conversion == 's')
		return (ft_string(args));
	if (conversion == 'c')
		return (ft_char(args));
	if (conversion == 'u')
		return (ft_unsigned(args));
	if (conversion == 'd' || conversion == 'i')
		return (ft_int (args));
	if (conversion == 'X')
		return (ft_hex(args, 1));
	if (conversion == 'x')
		return (ft_hex(args, 0));
	if (conversion == 'p')
		return (ft_pointer(args));
	if (conversion == '%')
		return (ft_percent());
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int			i;
	int			count;
	va_list		args;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += check(format[i + 1], &args);
			i += 2;
		}
		else
		{
			write(1, &format[i], 1);
			i++;
			count++;
		}
	}
	va_end(args);
	return (count);
}
