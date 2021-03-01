/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 00:24:20 by josantos          #+#    #+#             */
/*   Updated: 2021/01/18 00:53:44 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int 	main()
{
	char a[20] = "0123456789";
	char b[] = "01234567";

	printf("%s\n", ft_strncat(a, b, 4));

		char c[20] = "0123456789";
		char d[] = "01234567";


	printf("%s\n", strncat(c, d, 4));
}
