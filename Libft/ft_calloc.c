/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:46:16 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/18 16:10:54 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	i = count * size;
	ptr = (char *)malloc(i);
	if (ptr == NULL)
		return (NULL);
	while (i > 0)
	{
		*ptr = 0;
		ptr++;
		i--;
	}
	return ((void *)(ptr - count * size));
}
