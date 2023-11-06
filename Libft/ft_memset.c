/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:55:08 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/04 20:12:47 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*i;

	i = b;
	while (len-- > 0)
	{
		*i++ = c;
	}
	return (b);
}
/*
#include <stdio.h>
int main()
{
	void *s;
	int	a = 122;
	size_t l = 10;
	printf("%s",ft_memset(s,a,l));
}
*/
