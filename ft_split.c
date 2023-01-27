/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhaishb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:54:02 by gkhaishb          #+#    #+#             */
/*   Updated: 2023/01/27 12:54:05 by gkhaishb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*temp;
	char	*temp1;
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	if (s[i] == '\0')
	{
		res = malloc(sizeof(char *));
		if (!res)
			return (0);
		res[0] = 0;
		return (res);
	}
	while (s[i])
	{
		if (s[i++] == c)
		{	
			count++;
			while (s[i] == c)
				i++;
		}
		//printf("Check %d, %d\n", count, i);
	}
	res = malloc((count + 2) * sizeof(char *));
	if (!res)
		return (0);
	i = 0;
	temp = ft_strdup(s);
	while (*temp == c)
		temp++;
	while (i < count)
	{
		temp1 = ft_strchr(temp, c);
		*(temp1) = 0;
		while (*(temp1 + 1) == c)
		{
			temp1++;
		}
		res[i] = ft_strdup(temp);
		temp = temp1 + 1;
		i++;
	}
	if (s[ft_strlen((char *)s) - 1] != c)
		res[i] = ft_strdup(temp);
	return (res);
}

/*int main()
{
	char **s;
	int i, j;
	i = 0;
	j = 0;
	s = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	while (s[i])
	{
		printf("%s\n", s[i]);
		i++;
	}
}*/