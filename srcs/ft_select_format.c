#include "printf.h"

int     ft_select_format(va_list ap, char *c)
{
    if (*c == 'd' || *c == 'i' || *c == 'D')
        return (ft_format_int(ap, *c));
    else if (*c == 'o' || *c == 'O')
        return (ft_format_byte(ap));
    else if (*c == 'u' || *c == 'U')
        return (ft_format_uint(ap));
    else if (*c == 'x')
        return (ft_format_hexa(ap));
    else if (*c == 'X')
        return (ft_format_hexaup(ap));
    else if (*c == 'c')
        return (ft_format_char(ap));
    else if (*c == 's')
        return (ft_format_str(ap));
    else if (*c == 'S')
        return (ft_format_uni_many(ap));
    else if (*c == 'C')
        return (ft_format_uni_one(ap));
    else if (*c == 'p')
        return (ft_format_ptr(ap));
    else if (*c == '%' || *c == '}' || *c == ' ')
        return (ft_format_percent(ap, c));
    return (-1);
}
