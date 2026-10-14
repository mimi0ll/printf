#include "ft_printf.h"

static int print_hex(unsigned int n, int uppercase)
{
    int count;
    char *base;

    count = 0;
    if (uppercase)
        base = "0123456789ABCDEF";
    else
        base = "0123456789abcdef";
    if (n >= 16)
        count += print_hex(n / 16, uppercase);
    write(1, &base[n % 16], 1);
    count++;
    return (count);
}

int ft_hex(va_list *args, int uppercase)
{
    unsigned int n;

    n = va_arg(*args, unsigned int);
    return (print_hex(n, uppercase));
}