#include "printf.h"

int     ft_format_char(va_list ap)
{
    unsigned int    c;
    c = va_arg(ap, unsigned int);
    ft_putchar(c);
    return (1);
}
