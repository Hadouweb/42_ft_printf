#include "printf.h"

int     ft_format_char(va_list ap)
{
    unsigned int    c;
    c = va_arg(ap, unsigned int);
    printf("%c %u %d", c, c, c);
    if (c == ' ')
        ft_putchar(' ');
    else    
        ft_putchar('%');
    return (1);
}
