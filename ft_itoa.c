/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhaishb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:51:39 by gkhaishb          #+#    #+#             */
/*   Updated: 2023/01/28 19:51:41 by gkhaishb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int n)
{
	int	ntmp;
	int	count;

	count = 0;
	ntmp = n;
	while (ntmp)
	{
		ntmp /= 10;
		count++;
	}
	return (count);
}

int	ft_power(int count)
{
	int	power;

	power = 10;
	while (count > 2)
	{
		power *= 10;
		count--;
	}
	return (power);
}

char	*ft_res(int count, char *res, int n, int i)
{
	int	ntmp;

	while (count > 1)
	{
		ntmp = n / ft_power(count);
		res[i++] = ntmp + '0';
		n = n % ft_power(count--);
	}
	res[i] = n + '0';
	res[i + 1] = 0;
	return (res);
}

char	*ft_itoa(int n)
{
	int		i;
	int		count;
	char	*res;

	count = ft_count(n);
	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	else if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	else if (n > 0)
		res = malloc((count + 1) * sizeof(char));
	else
	{
		res = malloc((count + 2) * sizeof(char));
		n = -n;
		res[0] = '-';
		i = 1;
	}
	return (ft_res(count, res, n, i));
}
