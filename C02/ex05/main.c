/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 23:07:19 by josantos          #+#    #+#             */
/*   Updated: 2021/01/16 23:10:50 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main()
{
	char a[] = "afakkm";
    char b[] = "54Z2";
    char c[] = "ZXEAS";

    printf("tem que dar 0: %d\n", ft_str_is_uppercase(a));
    printf("tem que dar 0: %d\n", ft_str_is_uppercase(b));
    printf("tem que dar 1: %d\n", ft_str_is_uppercase(c));
}
