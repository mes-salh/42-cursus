/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:59:40 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/15 14:59:44 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle[i] == 0)
		return ((char *)haystack);
	while (len > 0 && *haystack != '\0')
	{
		i = 0;
		while (haystack[i] == needle[i] && haystack[i] != '\0' && i < len)
		{
			i++;
			if (needle[i] == '\0')
				return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (0);
}
// // #include <stdio.h>
// // #include <string.h>
// // int main ()
// // {
// // 	char *b = NULL;
// // 	char c[] = "test";
// // 	// printf("mine :%s\n",ft_strnstr(b,c,4));
// // 	printf("the original :%s\n",strnstr(b,c,4));
// // 	exit(0);
// // }
