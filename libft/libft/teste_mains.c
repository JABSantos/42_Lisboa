/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_mains.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 19:21:24 by josantos          #+#    #+#             */
/*   Updated: 2021/02/15 23:40:13 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int		main(void)
{
		int a[] = {512};
		char c[] = "Hello World";
		
		printf("%p\n", memset(a, 'b', 5));
		printf("%ls\n", &*a);
		//printf("%c\n", tolower(c));
}
