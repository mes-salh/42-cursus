/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:05:19 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/22 18:33:39 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*m;
	unsigned char	*a;
	size_t			i;

	if (src == NULL && dst == NULL)
		return (dst);
	m = (unsigned char *)dst;
	a = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*(m++) = *(a++);
		i++;
	}
	return (dst);
}
