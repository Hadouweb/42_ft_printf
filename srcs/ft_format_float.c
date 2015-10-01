#include "printf.h"

int     ft_format_float(va_list ap)
{
    float   n;
    n = va_arg(ap, int);
    //ft_putnbr_float(n);
    return (ft_nbrlen(n));
}
