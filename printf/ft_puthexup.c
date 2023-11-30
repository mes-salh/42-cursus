/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:30:20 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/29 21:40:27 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexup(unsigned int n, int *j)
{
	char	hex;

	if (n >= 16)
	{
		ft_puthexup((n / 16), j);
	}
	hex = (n % 16) + '0';
	if (hex > '9')
		hex = hex + 7;
	ft_putchar(hex, j);
}
