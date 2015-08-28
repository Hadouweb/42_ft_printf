#include "printf.h"

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
