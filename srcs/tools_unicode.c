#include "printf.h"

size_t  ft_wlen(wchar_t *wstr)
{
    size_t i;

    i = 0;
    if (wstr == '\0')
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
