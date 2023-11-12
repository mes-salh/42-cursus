/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:46:48 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/08 13:44:16 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (src == NULL && dst == NULL)
		return (dst);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (s < d)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	else if ((len > 0) && (s > d))
	{
		ft_memcpy(d, s, len);
	}
	return (dst);
}
/*
#include <stdio.h>
int main()
{
	char src[] = "1212";
	char dest[5];
	ft_memmove(dest,src,5);
	printf("%s",dest);
	return 0;
}
*/
