/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhaishb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:10:02 by gkhaishb          #+#    #+#             */
/*   Updated: 2023/01/18 17:10:06 by gkhaishb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_isalnum(int arg)
{
	return ((arg >= 'a' && arg <= 'z') || \
		(arg >= 'A' && arg <= 'Z') || (arg >= '0' && arg <= '9'));
}
/*int main()
{
  printf("%i", ft_isalnum(4));
}*/