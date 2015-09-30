#include "printf.h"

int     ft_format_int(va_list ap, char c)
{
    if (c == 'd' || c == 'i')
    {
        int     n;
        n = va_arg(ap, int);
        ft_putnbr(n);
        return (ft_intlen(n));
    } 
    else if (c == 'D')
    {
        long     n;
        n = va_arg(ap, long);
        ft_putnbr_long(n);
        if (n == 0)
            return (1);
        return (ft_longlen(n));
    }
    return (0);
}
