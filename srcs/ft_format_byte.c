#include "printf.h"

int     ft_format_byte(va_list ap)
{
    unsigned int     n;
    n = va_arg(ap, unsigned int);
    ft_putstr(ft_itoa_base(n, 8, '0'));
    return (ft_intlen(n));
}
