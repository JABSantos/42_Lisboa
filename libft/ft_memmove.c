/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:53:13 by josantos          #+#    #+#             */
/*   Updated: 2021/02/19 16:29:44 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*a;
	char	*b;

	a = (char *)dst;
	b = (char *)src;
	if (dst == '\0' && src == '\0')
		return (0);
	if (a > b)
	{
		i = 1;
		while (len >= i)
		{
			a[len - i] = b[len - i];
			len--;
		}
	}
	while (len--)
	{
		*a = *b;
		a++;
		b++;
	}
	return (dst);
}
