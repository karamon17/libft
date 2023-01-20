#include <stddef.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *s1 = (unsigned char *) dst;
    unsigned char *s2 = (unsigned char *) src;
    int i;

    i = 0;
    if (dst < src)
    {
        while(i++ < len)
            *s1++ = *s2++;
    }
    else
    {
        while(len > 0)
        {
            s1[len-1] = s2[len-1];
            len--;
        }
    }
}