/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:19:39 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/11 22:04:35 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	long	len;
	char	*new;

	new = (char *)s1;
	if (!s1 || !set)
		return (0);
	while (*s1 != '\0' && ft_strchr(set,*s1) != 0)
		s1++;
	len = ft_strlen(s1);
	while (len >= 0 && ft_strchr(set, s1[len]) != 0)
		len--;
	new = ft_substr((char *)s1, 0, len + 1);
	return (new);
}
// int main()
// {
// 	char a[] = "212MEDDAMINE212TT";
// 	char b[] = "21TF";
// 	printf("%s",ft_strtrim(a,b));
// }
