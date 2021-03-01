/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:37:55 by josantos          #+#    #+#             */
/*   Updated: 2021/03/01 12:24:39 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdlib.h>
# include <unistd.h>

int		get_next_line(int fd, char **line);
int		ft_strlen(char *str);
char	*strjoin(char *s1, char *s2);
int		hasnl(char *str);
char	*ft_strdup(char *str);
char	*beforenl(char *str);
char	*afternl(char *str);

#endif
