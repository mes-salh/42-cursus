/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:16:12 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/12 17:23:59 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long	i;

	i = n;
	if (fd < 0)
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-',fd);
		i = -i;
	}
	if (i >= 10)
	{
		ft_putnbr_fd((i / 10), fd);
		ft_putchar_fd((i % 10) + '0', fd);
	}
	else
		ft_putchar_fd((i + '0'), fd);
}
