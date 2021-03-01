/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 23:24:59 by josantos          #+#    #+#             */
/*   Updated: 2021/01/16 23:32:19 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main()
{
	char a[] = "afakkm";
    char b[] = "	";
    char c[] = "ZXEAS";

    printf("tem que dar 1: %d\n", ft_str_is_printable(a));
    printf("tem que dar 0: %d\n", ft_str_is_printable(b));
    printf("tem que dar 1: %d\n", ft_str_is_printable(c));
}
