/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 23:54:14 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/12 16:19:26 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t			len;
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	len = ft_strlen(s);
	while (s[i] != 0)
	{
		(*f)(i, &s[i]);
		i++;
	}
}
