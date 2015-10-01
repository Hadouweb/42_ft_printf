#include "printf.h"

char  ft_nbrlen(long long n)
{
    char    i;

    i = 0;
    if (n < 0)
        i++;
    while (n != 0)
    {
        n /= 10;
        i++;
    }
    return (i);
}

size_t  ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_putstr(char *str)
{
    size_t  i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

void    ft_putnbr(long long n)
{
    if (n < 0)
    {
        ft_putchar('-');
        if (n <= -10)
            ft_putnbr(n / 10 * -1);
        ft_putchar(n % 10 * -1 + '0');
    }
    else
    {
        if (n >= 10)
            ft_putnbr(n / 10);
        ft_putchar(n % 10 + '0');
    }
}
