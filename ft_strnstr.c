#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    if (!needle)
        return ((char *)haystack);
    if (len == 0)
        return (0);
    while (haystack[i])
    {
        j = 0;
        while (needle[j] && haystack[j+i] == needle[j] && j + i < len)
            j++;
        if (!needle[j])
            return ((char *)&haystack[i]);
        i++;
    }
    return (0);
}