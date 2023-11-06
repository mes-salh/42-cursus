/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:28:32 by mes-salh          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/11/06 15:03:51 by mes-salh         ###   ########.fr       */
=======
/*   Updated: 2023/11/04 20:52:34 by mes-salh         ###   ########.fr       */
>>>>>>> fcd57e70fa29e49509f54c35e3879f39efe36657
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
<<<<<<< HEAD
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char *s= NULL;
// 	printf("%zu\n", ft_strlen(s));

// 	// printf("%lu\n", strlen(s));
// }
=======
>>>>>>> fcd57e70fa29e49509f54c35e3879f39efe36657
