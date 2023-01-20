/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhaishb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:15:24 by gkhaishb          #+#    #+#             */
/*   Updated: 2023/01/18 17:15:26 by gkhaishb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isprint(int arg)
{
	return (arg >= 32 && arg <= 127);
}
/*int main()
{
  printf("%i", ft_isprint('g'));
}*/