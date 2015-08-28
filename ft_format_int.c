#include "printf.h"

int     ft_format_int(va_list ap)
{
    int     n;
    n = va_arg(ap, int);
    ft_putnbr(n);
    return (ft_intlen(n));
}
