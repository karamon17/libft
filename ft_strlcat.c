/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhaishb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:19:24 by gkhaishb          #+#    #+#             */
/*   Updated: 2023/01/20 16:19:53 by gkhaishb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	j = 0;
	res = 0;
	if (!dst || !src)
		return (0);
	while (dst[j])
		j++;
	while (src[i] && i < dstsize - 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	while (src[dst])
		res++;
	return (res);
}
/*int main()
{
  char x[10] = "hello ";
  printf("%i", ft_strlcat(x, "world", 80));
}*/
