#include "printf.h"

int     ft_select_format(va_list ap, char c)
{
    if (c == 'd' || c == 'i')
        return (ft_format_int(ap));
    else if (c == 'o')
        return (ft_format_byte(ap));
    else if (c == 'u')
        return (ft_format_uint(ap));
    else if (c == 'x')
        return (ft_format_hexa(ap));
    else if (c == 'X')
        return (ft_format_hexaup(ap));
    //else if (c == 'f')
        //return (ft_format_float(ap));
    else if (c == 'c')
        return (ft_format_char(ap));
    else if (c == 's')
        return (ft_format_str(ap));
    else if (c == 'p')
        return (ft_format_ptr(ap));
    else if (c == '%')
        return (ft_format_char(ap));
    else if (c == '}')
    {
        ft_putchar('}');
        return (1);
    }
    return (-1);
}
