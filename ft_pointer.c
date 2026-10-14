#include "ft_printf.h"

static int print_hex(unsigned long n, int uppercase)
{
    int     count;
    char    *base;

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

int ft_pointer(va_list *args)
{
    void            *ptr;
    unsigned long long    address;

    ptr = va_arg(*args, void *);
    address = (unsigned long long)ptr;
    if (!ptr)
    {
        write(1, "(nil)", 5);
        return (5);
    }
    write(1, "0x", 2);
    return (2 + print_hex(address, 0));
}