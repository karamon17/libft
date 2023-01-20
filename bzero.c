#include <stddef.h>

void    bzero(void *s, size_t n)
{
    int i;
    unsigned char	*ptr;

    i = 0;
    ptr = (unsigned char *)s;
    while (i < n)
    {
        ptr[i] = '\0';
        i++;
    }
}