/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 22:44:01 by josantos          #+#    #+#             */
/*   Updated: 2021/01/21 16:24:27 by josantos         ###   ########.fr       */
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
		else
			count++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (nb < 2147483647)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		else
			nb++;
	}
	return (2147483647);
}
