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
	t_list	**temp;

	
	res = malloc(sizeof(t_list));
	if (!res)
	{
		return (0);
	}
	res = lst;
	*temp = res;
	while (lst)
	{
		res -> content = f(lst -> content);
		res -> next = malloc(sizeof(t_list));
		if (!(res -> next))
		{
			ft_lstclear(temp, del((*temp) -> content));
			return (0);
		}
		res = res -> next;
		lst = lst -> next;
	}
	return (res);
}
