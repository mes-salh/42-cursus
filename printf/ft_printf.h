/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:30:52 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/28 18:10:58 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

void	ft_putstr_fd(char *s, int *j);
void	ft_putnbr_fd(int n, int *j);
void	ft_putchar_fd(char c, int *j);
int		ft_printf(const char *format, ...);
void	ft_puthexlow_fd(unsigned int n, int *j);
void	ft_puthexup_fd(unsigned int n, int *j);
void	ft_putnbru_fd(unsigned int n, int *j);
void	ft_putadd(void *ptr, int *j);
#endif
