/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhaishb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:51:43 by gkhaishb          #+#    #+#             */
/*   Updated: 2023/01/18 18:46:52 by gkhaishb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*memset(void *str, int c, size_t n)
{
	int				i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)str;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
/*int main()
{
    char str[50] = "1234567677867";
    memset(str, 'M', 4);
    printf("%s", str);
}*/
