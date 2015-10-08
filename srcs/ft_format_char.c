#include "printf.h"

int     ft_format_char(va_list ap)
{
    int            c;
    c = va_arg(ap, int);
    ft_putchar(c);
    return (1);
}
