/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:43:40 by josantos          #+#    #+#             */
/*   Updated: 2021/01/18 18:10:48 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main()
{
	char c[10] = "cinco";
	char d[] = "cinco";

	printf("%u\n", ft_strlcat(c, d, 7));
	printf("%s\n", c);

	
	
	char a[10] = "cinco";
	char b[] = "cinco";

	printf("%lu\n", strlcat(a, b, 7));
	printf("%s\n", a);

}
