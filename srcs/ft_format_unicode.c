#include "printf.h"

int     ft_format_unicode(va_list ap, char *c)
{
    char    *str;
    wchar_t *wstr;
    size_t  cnt;
    size_t  i;

    i = 0;
    cnt = 0;
    wstr = va_arg(ap, wchar_t*);
    printf("%zu\n", ft_wlen(wstr));
    str = (char *)malloc(ft_wlen(wstr) * sizeof(wchar_t) + 1);
    while (wstr[i])
    {
        cnt += ft_wconvert(str + cnt, wstr[i]);
        i++;
    }
    ft_putstr(str);
    return (cnt);
}
