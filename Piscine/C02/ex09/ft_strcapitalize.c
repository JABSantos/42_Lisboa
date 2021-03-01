/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 00:23:04 by josantos          #+#    #+#             */
/*   Updated: 2021/01/17 16:11:14 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int n;
	int capital;

	capital = 1;
	n = 0;
	while (str[n])
	{
		if ((str[n] >= 'a' && str[n] <= 'z')
			|| (str[n] >= 'A' && str[n] <= 'Z')
					|| (str[n] >= '0' && str[n] <= '9'))
		{
			if (capital == 1 && (str[n] >= 'a' && str[n] <= 'z'))
			{
				str[n] = str[n] - 32;
				capital = 0;
			}
			else if (capital == 0 && (str[n] >= 'A' && str[n] <= 'Z'))
				str[n] = str[n] + 32;
			capital = 0;
		}
		else
			capital = 1;
		n++;
	}
	return (str);
}
