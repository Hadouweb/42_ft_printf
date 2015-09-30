#include "printf.h"

int     ft_intlen(int n)
{
    size_t  i;

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
