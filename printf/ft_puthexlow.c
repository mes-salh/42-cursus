/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:30:08 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/28 18:06:12 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexlow_fd(unsigned int n, int *j)
{
	char	hex;

	if (n < 0)
	{
		ft_putchar_fd('-', j);
		n = -n;
	}
	if (n >= 16)
	{
		ft_puthexlow_fd((n / 16), j);
	}
	hex = (n % 16) + '0';
	if (hex > '9')
		hex = hex + 39;
	ft_putchar_fd(hex, j);
}
