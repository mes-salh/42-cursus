/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:29:32 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/04 11:29:50 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if ((char)c == (char)s[i])
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	cara;
	char	*res;
	char	*res1;

	char string[] = "agdsshhfsaf";
	cara = 's';
	res = ft_strrchr(string, cara);
	res1 = strrchr(string, cara);
	printf("%s" ,res);
	printf("\n%s" ,res1);
	return (0);
}
*/
