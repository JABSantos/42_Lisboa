/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 19:52:46 by josantos          #+#    #+#             */
/*   Updated: 2021/01/17 20:51:55 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main()
{
	char n[] = "0123";
	char m[] = "3210";
	char o[] = "O Carlos";
	char p[] = "O Carlos";
	char x[] = "a0b1z";
	char z[] = "a0b1a";
	char a[] = "abcde";
	char b[] = "abcd";

	printf("%d\n", ft_strcmp(n, m));
	printf("%d\n", ft_strcmp(o, p));
	printf("%d\n", ft_strcmp(x, z));
	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", strcmp(a, b));
}
