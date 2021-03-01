/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 00:55:07 by josantos          #+#    #+#             */
/*   Updated: 2021/01/18 21:43:06 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main()
{
	
	char a[] = "Hi, my name is Pablo";
	char b[] = "zw";

	printf("%s\n", ft_strstr(a, b));
	
	char c[] = "Hi, my name is Pablo";
	char d[] = "zw";

	printf("%s\n", strstr(c, d));
}
