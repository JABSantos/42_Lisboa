/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:08:04 by josantos          #+#    #+#             */
/*   Updated: 2021/01/19 19:45:07 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 1;
	c = 0;
	while (str[a] == ' ' || (str[a] >= 9 && str[a] <= 13))
		a++;
	while (str[a] == '-' || str[a] == '+')
	{b
		if (str[a++] == '-')
			b = b * -1;
	}
	while (str[a] != '\0')
	{
		if (str[a] >= 48 && str[a] <= 57)
		{
			c *= 10;
			c += str[a++] - '0';
		}
		else
			return (c * b);
	}
	return (c * b);
}