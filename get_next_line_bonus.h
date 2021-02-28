/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 18:14:06 by chde-mar          #+#    #+#             */
/*   Updated: 2020/10/27 18:14:27 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

int get_next_line(int fd, char **line);
int ft_line_creation(char **stat, char **line, int idx);
char*ft_strnew(int end);
int ft_strnbr(char *stat);
int ft_free_stat(char **stat, int result);
int ft_strlen(const char *str);
char*ft_substr(char const *s, int start, int len);
char*ft_strdup(char *s1);
char*ft_strnjoin(char *s1, char *s2, int ret);

#endif
