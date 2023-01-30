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

int	ft_count(int i, const char *s, char c)
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

char	**ft_res(char	**res, char const *s, char c, int count)
{
	char	*temp;
	char	*temp1;
	int		i;

	i = 0;
	temp = ft_strdup(s);
	while (*temp == c)
		temp++;
	while (i < count)
	{
		temp1 = ft_strchr(temp, c);
		*(temp1) = 0;
		while (*(temp1 + 1) == c)
			temp1++;
		res[i++] = ft_strdup(temp);
		temp = temp1 + 1;
	}
	if (s[ft_strlen(s) - 1] != c)
	{
		res[i] = ft_strdup(temp);
		res[i + 1] = 0;
	}
	else
		res[i] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	if (!s[i])
	{
		res = malloc(sizeof(char *));
		if (!res)
			return (0);
		res[0] = malloc(sizeof(char));
		if (!res[0])
			return (0);
		res[0] = 0;
		return (res);
	}
	count = ft_count(i, s, c);
	res = malloc((count + 2) * sizeof(char *));
	if (!res)
		return (0);
	res = ft_res(res, s, c, count);
	return (res);
}
