/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 22:19:37 by josantos          #+#    #+#             */
/*   Updated: 2021/01/16 22:56:55 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main()
{
	char a[] = "afakkm";
    char b[] = "54Z2";
    char c[] = "ZXEAS";

    printf("tem que dar 1: %d\n", ft_str_is_lowercase(a));
    printf("tem que dar 0: %d\n", ft_str_is_lowercase(b));
    printf("tem que dar 0: %d\n", ft_str_is_lowercase(c));
}
