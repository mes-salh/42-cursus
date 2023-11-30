/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 03:23:01 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/30 15:11:21 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print(const char *format, va_list arguments, int *length, int *i)
{
	if (format[*i] == 's')
		ft_putstr(va_arg(arguments, char *), length);
	else if (format[*i] == 'd' || format[*i] == 'i')
		ft_putnbr(va_arg(arguments, int), length);
	else if (format[*i] == 'c')
		ft_putchar(va_arg(arguments, int), length);
	else if (format[*i] == '%')
		ft_putchar('%', length);
	else if (format[*i] == 'x')
		ft_puthexlow(va_arg(arguments, int), length);
	else if (format[*i] == 'X')
		ft_puthexup(va_arg(arguments, int), length);
	else if (format[*i] == 'u')
		ft_putnbru(va_arg(arguments, unsigned int), length);
	else if (format[*i] == 'p')
		ft_putadd(va_arg(arguments, void *), length);
	else
		ft_putchar(format[*i], length);
	(*i)++;
}

int	ft_printf(const char *format, ...)
{
	va_list	arguments;
	int		index;
	int		length;

	index = 0;
	length = 0;
	va_start(arguments, format);
	if (write(1, "", 0) == -1)
		return (-1);
	while (format[index])
	{
		if (format[index] != '%')
			ft_putchar(format[index++], &length);
		else if (format[index] == '%' && format[index + 1] == '\0')
			index++;
		else
		{
			index++;
			ft_print(format, arguments, &length, &index);
		}
	}
	va_end(arguments);
	return (length);
}
