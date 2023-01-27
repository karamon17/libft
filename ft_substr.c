/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhaishb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:15:48 by gkhaishb          #+#    #+#             */
/*   Updated: 2023/01/25 13:25:30 by gkhaishb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	sln;
	char	*res;

	i = 0;
	sln = ft_strlen((char *)s) - start - 1;
	if (sln < len)
		res = malloc(sln * sizeof(char));
	else
		res = malloc(len * sizeof(char));
	if (!res)
		return (0);
	while (i < len && s[i + start])
	{
		res[i] = s[i + start];
		i++;
	}
	res[i] = 0;
	return (res);
}
