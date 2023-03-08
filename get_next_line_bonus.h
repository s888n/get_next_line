/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachdi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:51:02 by srachdi           #+#    #+#             */
/*   Updated: 2022/11/23 10:58:19 by srachdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int		ft_strchr(char *str, int c);
size_t	ft_strlen( char *str);
char	*ft_strjoin(char *storage, char *readstr);
char	*get_next_line(int fd);
char	*readAndStore(int fd, char *storage);
char	*resetStorage(char *storage);
char	*extractLine(char *storage);
#endif
