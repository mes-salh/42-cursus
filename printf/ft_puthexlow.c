/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:30:08 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/29 21:40:34 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexlow(unsigned int n, int *j)
{
	char	hex;

	if (n >= 16)
	{
		ft_puthexlow((n / 16), j);
	}
	hex = (n % 16) + '0';
	if (hex > '9')
		hex = hex + 39;
	ft_putchar(hex, j);
}
