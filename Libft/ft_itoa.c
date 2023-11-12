/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:57:46 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/12 16:24:23 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(long i);

char	*ft_itoa(int n)
{
	int		nbrlen;
	long	nbr;
	char	*str;
	int		i;

	nbr = (long)n;
	nbrlen = ft_nbrlen(nbr);
	i = 0;
	str = malloc(nbrlen + 1);
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		str[0] = '0';
	str[nbrlen--] = '\0';
	while (nbr != 0)
	{
		str[nbrlen--] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}

int	ft_nbrlen(long i)
{
	int	nblen;

	nblen = 0;
	if (i == 0)
		return (1);
	if (i < 0)
		nblen++;
	while (i != 0)
	{
		i /= 10;
		nblen++;
	}
	return (nblen);
}
// int	main(void)
// {
// 	int	nb = -1000;
// 	printf("%s\n", ft_itoa(nb));
// }
