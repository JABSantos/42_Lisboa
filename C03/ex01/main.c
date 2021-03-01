/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 21:05:06 by josantos          #+#    #+#             */
/*   Updated: 2021/01/17 21:46:10 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2i, unsigned int n);

int		main()
{
	char n[] = "0123";
	char m[] = "3210";
	char o[] = "O Carlos";
	char p[] = "O Carlos";
	char x[] = "a0b1z";
	char z[] = "a0b1a";
	char a[] = "";
	char b[] = "";

	printf("%d\n", ft_strncmp(n, m, 2));
	printf("%d\n", ft_strncmp(o, p, 5));
	printf("%d\n", ft_strncmp(x, z, 20));
	printf("%d\n", ft_strncmp(a, b, 5));
	printf("%d\n", strncmp(a, b, 5));
}
