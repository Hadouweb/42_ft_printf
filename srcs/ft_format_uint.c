#include "printf.h"
#include <limits.h>

int     ft_format_uint(va_list ap)
{
    unsigned long long     n;
    n = va_arg(ap, unsigned long long);
    ft_putnbr_u(n);
    if (n == 0)
        return (1);
    return (ft_nbrlen_u(n, 10));
}
