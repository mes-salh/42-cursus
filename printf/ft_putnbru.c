/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 06:07:17 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/28 18:08:08 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbru_fd(unsigned int n, int *j)
{
	if (n >= 10)
	{
		ft_putnbru_fd((n / 10), j);
		ft_putchar_fd((n % 10) + '0', j);
	}
	else
		ft_putchar_fd((n + '0'), j);
}
