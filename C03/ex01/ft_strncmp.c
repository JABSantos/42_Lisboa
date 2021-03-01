/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 20:57:36 by josantos          #+#    #+#             */
/*   Updated: 2021/01/19 14:53:53 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int a;

	a = 0;
	if (n == 0)
		return (0);
	while ((*s1 != '\0' && s2 != '\0')
			&& ++a < n && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}