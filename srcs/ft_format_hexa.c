#include "printf.h"

int     ft_format_hexa(va_list ap)
{
    unsigned int     n;
    n = va_arg(ap, unsigned int);
    ft_putstr(ft_itoa_base(n, 16, '0'));
    if (n == 0)
        return (1);
    return (ft_nbrlen(n, 16));
}
