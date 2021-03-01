/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:19:08 by josantos          #+#    #+#             */
/*   Updated: 2021/01/18 22:56:40 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_arr_len(char *src)
{
	int a;

	a = 0;
	while (src[a] != '\0')
		a++;
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char *i_dest;
	char *i_src;
	unsigned int dest_length;
	unsigned int a;

	i_dest = dest;
	i_src = src;
	a = size;
	while (a-- != 0 && *i_dest != '\0')
		i_dest++;
	dest_length = i_dest - dest;
	a = size - dest_length;
	if (a == 0)
		return (dest_length + get_arr_len(src));
	while (*src != '\0')
	{
		if (a > 1)
		{
			*i_dest++ = *src;
			a--;
		}
		src++;
	}
	*i_dest = '\0';
	return (dest_length + (src - i_src));
}
