/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:44:48 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/08 19:28:08 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	char	sign;
	long long	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - 48);
		i++;
		if ( nb > (9223372036854775807) / 10 && sign == -1)
			return (0);
		else if ( nb > (9223372036854775807) / 10 && sign == 1)
			return (-1);
	}
	return (nb * sign);
}
#include <stdio.h>
int main()
{
	char a[] = "-9223372036854775807";
	printf("%d\n", atoi(a));
}
