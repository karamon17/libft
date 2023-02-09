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

static int	ft_count(int i, const char *s, char c)
{
	int	count;

	count = 0;
	while (s[i])
	{
		if (s[i++] == c)
		{	
			count++;
			while (s[i] == c)
				i++;
		}
	}
	return (count);
}

static char	**ft_cleanmem(int i, char **res)
{
	while (i >= 0)
		free(res[i--]);
	free(res);
	return (0);
}

static char	**ft_res(char	**res, char const *s, char c, int count)
{
	char	*temp;
	char	*temp1;
	int		i;

	i = -1;
	temp = ft_strdup(s);
	if (!temp)
		return (0);
	while (++i <= count)
	{
		temp1 = ft_strchr(temp, c);
		if (temp1)
		{
			*(temp1) = 0;
			while (*(temp1 + 1) == c)
				temp1++;
		}
		res[i] = ft_strdup(temp);
		if (!res[i])
			return (ft_cleanmem(i, res));
		temp = temp1 + 1;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		count;
	char	*s1;
	char	s2[2];

	s2[0] = c;
	s2[1] = 0;
	s1 = ft_strtrim(s, s2);
	if (!s1)
		return (0);
	i = 0;
	count = 0;
	if (!s1[i])
		return ((char **)ft_calloc(1, sizeof(char *)));
	count = ft_count(i, s1, c);
	res = ft_calloc(count + 2, sizeof(char *));
	if (!res)
		return (0);
	return (ft_res(res, s1, c, count));
}
