#include "printf.h"
#include <stdio.h>
#include <limits.h>
#include <locale.h>

int     ft_printf(const char *f, ...)
{
    va_list     ap;
    size_t      i;
    char        *str;
    size_t      cnt;

    va_start(ap, f);
    cnt = 0;
    str = (char *)malloc(sizeof(char) * (strlen(f)) + 1);
    str = strcpy(str, f);
    i = 0;
    while (str[i])
    {
        if (str[i] != '%')
        {
            ft_putchar(str[i]);
            cnt++;
        }
        else if (str[i + 1])
            cnt += ft_select_format(ap, &str[i += 1]);
        i++;
    }
    va_end(ap); 
    return (cnt);
}

int     main(void)
{
    int     test;
    int     n1;
    int     n2;
    wchar_t    c;

    char *locale;

    locale = setlocale(LC_ALL, "");

    test = 123;
    n2 = 0;
    c = L"\0";
    n1 = ft_printf("%S\n", NULL); 
    n2 = printf("%S\n", NULL); 
    ft_printf("%d %d\n", n1, n2); 

    return (0);
}
