/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_mains.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 19:21:24 by josantos          #+#    #+#             */
/*   Updated: 2021/02/20 14:01:31 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int		main(void)
{	
char *s = ft_strtrim("   xxx   xxx", " x");

	printf("%s\n",s);
	//printf("%d\n", ft_strncmp("345", "845", 1));
}
