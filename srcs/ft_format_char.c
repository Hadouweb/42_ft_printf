#include "printf.h"

int     ft_format_char(va_list ap)
{
    char            c;
    c = va_arg(ap, wchar_t);
    ft_putchar(c);
    return (1);
}
