#include "printf.h"

int     ft_format_uint(va_list ap)
{
    unsigned int     n;
    n = va_arg(ap, unsigned int);
    ft_putnbr_long(n);
    if (n == 0)
        return (1);
    return (ft_longlen(n));
}
