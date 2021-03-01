/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 22:10:34 by josantos          #+#    #+#             */
/*   Updated: 2021/01/18 00:18:28 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int 	main()
{
	char a[20] = "0123456789";
	char b[] = "01234567";

	printf("%s\n", ft_strcat(a, b));
		
		char c[20] = "0123456789";
		char d[] = "01234567";

	printf("%s\n", strcat(c, d));

}
