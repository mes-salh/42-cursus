/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:12:53 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/06 15:05:44 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	if (!dst && dstsize == 0)
		return (0);
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	if (dstsize < dstlen)
		return (srclen + dstsize);
	dstsize -= dstlen;
	if (dstsize)
	{
		while (src[i] && dstsize - 1 > 0)
		{
			dst[dstlen + i] = src[i];
			i++;
			dstsize--;
		}
		dst[dstlen + i] = '\0';
	}
	return (dstlen + srclen);
}
// #include <string.h>
// #include <stdio.h>
// #include <stdio.h>
// int	main()
// {
// 	char *dst = NULL;
// 	char src[] = "NULL" ;
// 	ft_strlcat(dst, src, 0);
// 	printf("%s\n", dst);
// // strlcat(NULL, "abc", 1);
// exit(0);
// // ft_strlcat(NULL, "abc", 0);
// // exit(0);
// // ft_strlcat("abc", NULL, 0);
// // exit(0);
// }
