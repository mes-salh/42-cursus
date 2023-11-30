/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:16:12 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/29 21:40:52 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *j)
{
	unsigned int	i;

	i = n;
	if (n < 0)
	{
		ft_putchar('-', j);
		i = -n;
	}
	if (i >= 10)
	{
		ft_putnbr((i / 10), j);
		ft_putchar((i % 10) + '0', j);
	}
	else
		ft_putchar((i + '0'), j);
}
