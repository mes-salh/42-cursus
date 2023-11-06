/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:09:03 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/06 15:43:27 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	tofind;
	unsigned char	*str;
	size_t			i;

	tofind = (unsigned char )c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == tofind)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char a[] = "messalh";
// 	char b = 'l';
// 	puts(ft_memchr(a,b,7));
// }
