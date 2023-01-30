/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhaishb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:40:27 by gkhaishb          #+#    #+#             */
/*   Updated: 2023/01/30 16:40:29 by gkhaishb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*lsttemp;

	lsttemp = lst;
	while (lst -> next)
	{
		res = malloc(sizeof(t_list));
		if (!res)
			{
				del(lsttemp);
				return (0);
			}
		res = f(lst -> content);
		lst = lst -> next;
	}
	return (res);
}
