/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 19:54:43 by josantos          #+#    #+#             */
/*   Updated: 2021/01/20 20:20:22 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int a;
	int count;

	a = 1;
	count = 0;
	while (nb != 0 && nb > 0)
	{
		nb = nb - a;
		a = a + 2;
		count++;
	}
	if (nb == 0)
		return (count);
	else
		return (0);
}
