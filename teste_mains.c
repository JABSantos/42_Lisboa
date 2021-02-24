/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_mains.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 19:21:24 by josantos          #+#    #+#             */
/*   Updated: 2021/02/22 19:47:37 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

static int		ft_is_in_charset(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

static void		ft_final_part(char **str_return, char *str, char charset)
{
	int	aloc;
	int	count;
	int index;

	index = 0;
	aloc = 0;
	count = 0;
	while (str[index])
	{
		if (ft_is_in_charset(str[index], charset) == 0)
		{
			while (ft_is_in_charset(str[index], charset) == 0 && str[index])
			{
				str_return[aloc][count] = str[index];
				count++;
				index++;
			}
			str_return[aloc][count] = 0;
			aloc++;
			count = 0;
		}
		if (str[index])
			index++;
	}
	str_return[aloc] = 0;
}

static void		ft_scnd_size(char **str_return, char *str, char charset)
{
	int	count;
	int	aloc;
	int index;

	index = 0;
	aloc = 0;
	count = 0;
	while (str[index] != '\0')
	{
		if (ft_is_in_charset(str[index], charset) == 0)
		{
			while (ft_is_in_charset(str[index], charset) == 0 && str[index])
			{
				count++;
				index++;
			}
			str_return[aloc] = (char*)malloc(count * sizeof(char));
			aloc++;
			count = 0;
		}
		index++;
	}
}

static int		ft_frst_size(char *str, char charset)
{
	int	size;
	int	index;
	int	aux2;

	aux2 = 0;
	index = 0;
	size = 0;
	while (str[index++])
	{
		if (ft_is_in_charset(str[index], charset))
		{
			aux2++;
			if ((str[index + 1] && !ft_is_in_charset(str[index + 1], charset))
			|| (str[index + 1] && !ft_is_in_charset(str[index - 1], charset)))
			{
				while (!ft_is_in_charset(str[index], charset) && str[index + 1])
					index++;
				size++;
			}
		}
	}
	if (size == 0 && aux2 > 0)
		return (-1);
	return (size + 2);
}

char			**ft_split(char const *s, char c)
{
	char	**str_return;
	int		first_size;

	first_size = ft_frst_size((char*)s, c);
	if (first_size == -1 || *s == 0)
	{
		if (!(str_return = (char**)ft_calloc(sizeof(char), 1)))
			return (0);
		return (str_return);
	}
	if (first_size == 2)
	{
		if (!(str_return = (char**)ft_calloc(sizeof(char*), 2)))
			return (0);
		str_return[0] = ft_strdup(s);
		return (str_return);
	}
	if (!(str_return = (char**)malloc(sizeof(char *) * first_size)))
		return (0);
	ft_scnd_size(str_return, (char*)s, c);
	ft_final_part(str_return, (char*)s, c);
	return (str_return);
}


int		main(void)
{
	char * * tab = ft_split("  tripouille  42  ", ' ');
	printf("%s, %s\n", tab[0], tab[1]);
}
