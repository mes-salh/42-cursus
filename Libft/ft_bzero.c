/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:37:09 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/15 15:01:59 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char str[] = "Medd Amine";
// 	ft_bzero(str, sizeof(str));

// 	int i = 0;
// 	while (i < sizeof(str)) {
// 		printf("%d", str[i]);
// 		i++;
// 	}

// 	return 0;
// }
