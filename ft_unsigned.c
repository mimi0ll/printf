#include "ft_printf.h"

static int      print_unsigned(unsigned int n)
{
        int     count;

        count = 0;
        if (n >= 10)
                count += print_unsigned( n / 10);
        write(1, &"0123456789"[n % 10], 1);
        count++;
        return (count);
}
int     ft_unsigned(va_list *args)
{       
        unsigned int    n;
        
        n = va_arg(*args, unsigned int);
        return (print_unsigned(n));
}       