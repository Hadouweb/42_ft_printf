#include "printf.h"

void    ft_printbit_wchar(wchar_t *w)
{
    size_t  i;

    i = 1 << 31;
    while (i > 0)
    {
        if (*w & i)
            ft_putchar('1');
        else
            ft_putchar('0');
        i >>= 1;
    }
    ft_putchar('\n');
}

int    ft_wis_empty(wchar_t *w)
{
    size_t  i;

    i = 1 << 31;
    if (w != NULL)
    {
        while (i > 0)
        {
            if (*w & i)
                return (0);
            i >>= 1;
        }
    }
    return (1);
}

size_t  ft_wlen(wchar_t *wstr)
{
    size_t i;

    i = 0;
    if (*wstr == 0)
        return (0);
    while (wstr[i])
        i++;
    return (i);
}

int     ft_wconvert(char *str, wchar_t w)
{
    if (w < 128)
    {
        *(str++) = w;
        return (1);
    }
    else if (w < 2048)
    {
        *(str++) = 0xC0 | ((w >> 6) & 0x3F);
        *(str++) = 0x80 | (w & 0x3F);
        return (2);
    }
    else if (w < 65535)
    {
        *(str++) = 0xE0 | ((w >> 12) & 0xFFF);
        *(str++) = 0x80 | ((w >> 6) & 0x3F);
        *(str++) = 0x80 | (w & 0x3F);
        return (3);
    }
    else if (w < 1114111)
    {
        *(str++) = 0xF0 | ((w >> 18) & 0x3FFFF);
        *(str++) = 0x80 | ((w >> 12) & 0xFFF);
        *(str++) = 0x80 | ((w >> 6) & 0x3F);
        *(str++) = 0x80 | (w & 0x3F);
        return (4);
    }
    return (0);
}
