/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 14:39:45 by josantos          #+#    #+#             */
/*   Updated: 2021/01/15 15:09:43 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main()
{
	char string[20] = "";
	char stringtest[20] = "tes24t6546te";
	char letas[20] = "asKJHKJGdads";
	printf("Suposto ser 1 : %d \n Suposto ser 0 : %d \n suposto ser 1 : %d ", ft_str_is_alpha(string), ft_str_is_alpha(stringtest) ,ft_str_is_alpha(letas));

}
