/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 06:07:17 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/26 06:56:17 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbru_fd(unsigned int n, int fd , int *j)
{
	if (fd < 0)
		return ;
	if (n >= 10)
	{
		ft_putnbru_fd((n / 10), fd, j);
		if (*j == -1)
			return ;
		ft_putchar_fd((n % 10) + '0', fd, j);
		if (*j == -1)
			return ;
	}
	else
		ft_putchar_fd((n + '0'), fd, j);
}
