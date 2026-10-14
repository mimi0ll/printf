#include "ft_printf.h"

int	ft_string(va_list *args)
{
	char	*str;
	int		i;

	i = 0;
	str = va_arg(*args, char *);
	if (!str)
	{
		write (1, "(NULL)", 6);
		return (6);
	}
	while (str[i])
	{
		i++;
	}
	write(1, str, i);
	return (i);
}
