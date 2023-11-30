/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:29:39 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/29 21:42:35 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthx(unsigned long n, int *j)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
	{
		ft_puthx((n / 16), j);
	}
	ft_putchar(hex[n % 16], j);
}

void	ft_putadd(void *ptr, int *j)
{
	unsigned long	n;
	char			*hex;

	hex = "0123456789abcdef";
	n = (unsigned long)ptr;
	ft_putchar('0', j);
	ft_putchar('x', j);
	if (ptr == NULL)
	{
		ft_putchar('0', j);
		return ;
	}
	ft_puthx(n, j);
}
