#include "libft.h"

char *ft_strdup(const char *s1)
{
    int     i;
    int     j;
    char    *str;
    
    j = 0;
    i = ft_strlen(s1) + 1;
    str = malloc(i * sizeof(char));
    if (!str)
        return (0);
    while (s1[j])
    {
        str[j] = s1[j];
        j++;
    }
    str[j] = s1[j];
    return (str);
}