/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srachdi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:50:22 by srachdi           #+#    #+#             */
/*   Updated: 2022/11/22 13:47:40 by srachdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
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
