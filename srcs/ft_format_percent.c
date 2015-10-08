#include "printf.h"

int     ft_format_percent(char *t)
{
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
