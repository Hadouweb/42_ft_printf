#include "printf.h"

int     ft_format_ptr(va_list ap)
{
    char            *p;
    unsigned long   c;

    ft_putstr("0x7fff");
    c = va_arg(ap, unsigned long);
    p = ft_itoa_base(c, 16, '0');
    ft_putstr(p);
    return (ft_strlen(p) + 6);
}
