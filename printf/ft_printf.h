/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:30:52 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/29 21:45:13 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_putstr(char *s, int *j);
void	ft_putnbr(int n, int *j);
void	ft_putchar(char c, int *j);
int		ft_printf(const char *format, ...);
void	ft_puthexlow(unsigned int n, int *j);
void	ft_puthexup(unsigned int n, int *j);
void	ft_putnbru(unsigned int n, int *j);
void	ft_putadd(void *ptr, int *j);
#endif
