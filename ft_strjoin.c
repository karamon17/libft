/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhaishb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:26:46 by gkhaishb          #+#    #+#             */
/*   Updated: 2023/01/25 14:07:09 by gkhaishb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		s1ln;
	size_t		s2ln;
	char		*res;

	s1ln = ft_strlen((char *)s1);
	s2ln = ft_strlen((char *)s2);
	res = malloc((s1ln + s2ln + 1) * sizeof(char));
	if (!res)
		return (0);
	res[0] = 0;
	ft_strlcat(res, s1, s1ln + s2ln + 1);
	ft_strlcat(res + s1ln, s2, s1ln + s2ln + 1);
	*(res + s1ln + s2ln + 1) = 0;
	return (res);
}
