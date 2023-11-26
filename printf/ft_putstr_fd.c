/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:27:01 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/26 06:51:34 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd, int *j)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr_fd("(null)", fd, j);
		return ;
	}
	while (*s != '\0' && i != -1)
	{
		i = write(fd, s, 1);
		if (i == -1)
		{
			*j = -1;
			return ;
		}
		s++;
		(*j)++;
	}
}
