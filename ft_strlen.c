/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:28:32 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/06 15:03:51 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char *s= NULL;
// 	printf("%zu\n", ft_strlen(s));

// 	// printf("%lu\n", strlen(s));
// }
