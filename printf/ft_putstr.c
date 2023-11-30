/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:27:01 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/30 18:42:09 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *j)
{
	int	i;

	i = 0;
	if (!s)
	{
		*j += write(1, "(null)", 6);
		return ;
	}
	while (s[i] != '\0')
	{
		ft_putchar(s[i], j);
		i++;
	}
}
