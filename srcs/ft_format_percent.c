#include "printf.h"

int     ft_format_percent(va_list ap, char *t)
{
    unsigned int    c;
    c = va_arg(ap, unsigned int);
    if (*t == ' ')
    {
        if (*(t + 1) == '%')
            ft_putchar('%');
        else
            return (0);
    }
    else if (*t == '}')
        ft_putchar('}');
    else    
        ft_putchar('%');
    return (1);
}
