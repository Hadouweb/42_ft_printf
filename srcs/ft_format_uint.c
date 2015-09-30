#include "printf.h"

int     ft_format_uint(va_list ap)
{
    unsigned int     n;
    n = va_arg(ap, unsigned int);
    ft_putnbr(n);
    return (ft_intlen(n));
}
