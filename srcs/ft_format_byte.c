#include "printf.h"

int     ft_format_byte(va_list ap)
{
    unsigned long    n;
    char            *str;
    n = va_arg(ap, unsigned long);
    str = ft_itoa_base(n, 8, '0');
    ft_putstr(str);
    return (ft_strlen(str));
}
