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
	char	*dst;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
	{
		dst = malloc(sizeof(char) * 1);
		if (!dst)
			return (0);
		dst[i] = '\0';
		return (dst);
	}
	dst = malloc(sizeof(char) * len + 1);
	if (!dst)
		return (0);
	while (i < len)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
