/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 20:21:57 by josantos          #+#    #+#             */
/*   Updated: 2021/01/21 16:06:39 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int count;

	count = 2;
	if (nb < 2)
		return (0);
	while (count < nb / 2)
	{
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}