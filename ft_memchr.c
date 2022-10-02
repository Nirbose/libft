/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltuffery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:35:34 by ltuffery          #+#    #+#             */
/*   Updated: 2022/10/02 21:13:29 by ltuffery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*tmp;
	unsigned char		cast_of_c;

	i = 0;
	tmp = (unsigned char *)s;
	cast_of_c = c;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (tmp[i] == cast_of_c)
			return ((void *) &tmp[i]);
		i++;
	}
	return (NULL);
}
