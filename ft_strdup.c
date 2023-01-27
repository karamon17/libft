/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhaishb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:51:23 by gkhaishb          #+#    #+#             */
/*   Updated: 2023/01/25 12:52:22 by gkhaishb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*str;

	j = 0;
	i = ft_strlen((char *)s1) + 1;
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
