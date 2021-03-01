/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 21:18:37 by josantos          #+#    #+#             */
/*   Updated: 2021/01/15 14:14:04 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int slot;

	slot = 0;
	while (slot < n && src[slot] != '\0')
	{
		dest[slot] = src[slot];
		slot++;
	}
	while (slot < n)
	{
		dest[slot] = '\0';
		slot++;
	}
	return (dest);
}
