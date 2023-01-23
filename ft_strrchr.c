/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhaishb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:54:44 by gkhaishb          #+#    #+#             */
/*   Updated: 2023/01/23 17:54:47 by gkhaishb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	z;

	i = 0;
	z = -1;
	while (s[i])
	{
		if (s[i] == c)
			z = i;
		i++;
	}
	if (z != -1)
		return ((char *)&s[z]);
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}
