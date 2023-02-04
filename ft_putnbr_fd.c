/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gevorg <gevorg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:08:09 by gkhaishb          #+#    #+#             */
/*   Updated: 2023/02/04 21:51:57 by gevorg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	res[12];

	if (fd < 0)
		return ;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n == 0)
		write(fd, "0", 1);
	else
	{
		if (n < 0)
		{
			n = -n;
			write(fd, "-", 1);
		}
		i = 0;
		while (n != 0)
		{
			res[i++] = n % 10 + '0';
			n = n / 10;
		}
		if (i != 0)
			i--;
		while (i >= 0)
			write(fd, &res[i--], 1);
	}
}
