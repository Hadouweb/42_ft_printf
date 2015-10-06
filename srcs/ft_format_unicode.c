#include "printf.h"

int     ft_format_uni_many(va_list ap)
{
    char    *str;
    wchar_t *wstr;
    size_t  cnt;
    size_t  i;

    i = 0;
    cnt = 0;
    wstr = va_arg(ap, wchar_t*);
    if (wstr == NULL)
    {
        ft_putstr("(null)");
        return (6);
    }
    str = (char *)malloc(ft_wlen(wstr) * sizeof(wchar_t) + 1);
    while (wstr[i])
    {
        cnt += ft_wconvert(str + cnt, wstr[i]);
        i++;
    }
    ft_putstr(str);
    return (cnt);
}

int     ft_format_uni_one(va_list ap)
{
    wchar_t w;
    char    *str;
    size_t  cnt;

    w = va_arg(ap, wchar_t);
    str = (char*)malloc(4);
    cnt = ft_wconvert(str, w);
    ft_putstr(str);
    return (cnt);
}
