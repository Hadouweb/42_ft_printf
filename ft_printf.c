#include "printf.h"
#include "stdio.h"

int     ft_printf(const char *f, ...)
{
    va_list     ap;
    size_t      i;

    i = 0;
    va_start(ap, f);
    while (f[i])
    {
        if (f[i] != '%')
            ft_putchar(f[i]);
        else
            ft_select_format(ap, f[i += 1]);
        i++;
    }
    
    return (1);
}

int     main(void)
{
    ft_printf("me : %x\n", 123); 
    ft_printf("me : %X\n", 123); 
    
    printf("%x\n", 123); 
    printf("%X\n", 123); 
    return (0);
}
