/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 03:14:46 by mes-salh          #+#    #+#             */
/*   Updated: 2023/12/31 12:07:20 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_MAX
#  define BUFFER_MAX 10240
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
void	ft_free(char **ptr);
char	*ft_get_the_next(char *buffer);
char	*ft_get_the_line(char *buffer);
char	*ft_read_line(int fd, char *resultat);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
char	*get_next_line(int fd);
#endif
