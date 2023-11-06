/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:02:51 by mes-salh          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/11/06 16:26:46 by mes-salh         ###   ########.fr       */
=======
/*   Updated: 2023/11/04 20:47:57 by mes-salh         ###   ########.fr       */
>>>>>>> fcd57e70fa29e49509f54c35e3879f39efe36657
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isascii(int c);
char	*ft_strchr(const char *s, int c);
int		ft_isprint(int c);
char	*ft_strrchr(const char *s, int c);
size_t	ft_strlen(const char *s);
int		ft_isalnum(int c);
void	*ft_memset(void *b, int c, size_t len);
<<<<<<< HEAD
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
=======
>>>>>>> fcd57e70fa29e49509f54c35e3879f39efe36657

#endif
