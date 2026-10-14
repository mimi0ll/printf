/* ************************************************************************** */
#include "ft_printf.h"

static int	print_number(int n)
{
	char	c;
	int		count;

	count = 0;
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write (1, "-", 1);
		count++;
		n = -n;
	}
	if (n >= 10)
		count += print_number(n / 10);
	c = (n % 10) + '0';
	write (1, &c, 1);
	count++;
	return (count);
}

int	ft_int(va_list *args)
{
	int	n;

	n = va_arg(*args, int);
	return (print_number(n));
}
