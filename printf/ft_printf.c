/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 03:23:01 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/26 06:47:15 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arguments;
	int		index;
	int		length;

	index = 0;
	length = 0;
	va_start(arguments, format);
	while (format[index])
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == 's')
				ft_putstr_fd(va_arg(arguments, char *), 1, &length);
			else if (format[index] == 'd' || format[index] == 'i')
				ft_putnbr_fd(va_arg(arguments, int), 1, &length);
			else if (format[index] == 'c')
				ft_putchar_fd(va_arg(arguments, int), 1, &length);
			else if (format[index] == '%')
				ft_putchar_fd('%', 1, &length);
			else if (format[index] == 'x')
				ft_puthexlow_fd(va_arg(arguments, int), 1, &length);
			else if (format[index] == 'X')
				ft_puthexup_fd(va_arg(arguments, int), 1, &length);
			else if (format[index] == 'u')
				ft_putnbru_fd(va_arg(arguments, int), 1, &length);
			else if (format[index] == 'p')
				ft_putadd(va_arg(arguments, void *), 1, &length);
			if (length == -1)
				return (-1);

		}
		else
			ft_putchar_fd(format[index], 1, &length);
			if (length == -1)
				return (-1);
		index++;
	}
	va_end(arguments);
	return (length);
}
