/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:41:29 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/09 14:49:01 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start > slen)
		start = slen;
	if (len > slen - start)
		len = slen - start;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	while (start < slen && len > i)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
// int main()
// {
// 	char str[] = "MEDDAMINE";
// 	printf("%s",ft_substr(str,4,5));
// }
