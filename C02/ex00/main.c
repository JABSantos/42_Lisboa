/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 18:56:11 by josantos          #+#    #+#             */
/*   Updated: 2021/01/15 14:21:58 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char dest[20] = "matata";

	printf("era %s\n", dest);

	ft_strcpy(dest, "hakuna");
	
	printf("agora %s",  dest);
}
