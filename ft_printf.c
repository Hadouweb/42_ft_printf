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
    void    *ptr;

    ptr = NULL;
    ft_printf("This is a simple test.\n"); 
    //ft_printf("me : %f\n", -123.1231223); 
    
    printf("This is a simple test.\n"); 
    //printf("%f\n", -123.212311); 
    return (0);
}
