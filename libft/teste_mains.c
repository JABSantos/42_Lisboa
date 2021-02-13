/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_mains.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 19:21:24 by josantos          #+#    #+#             */
/*   Updated: 2021/02/13 21:17:17 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int		main(void)
{
		char a[] = "-2147483648";
		
		printf("%d\n", ft_atoi(a));
		printf("%d\n", atoi(a));
}
