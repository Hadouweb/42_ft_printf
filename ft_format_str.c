#include "printf.h"

int     ft_format_str(va_list ap)
{
    char    *str;
    str = va_arg(ap, char*);
    ft_putstr(str);
    return (ft_strlen(str));
}
