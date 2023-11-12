/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 23:09:07 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/11 23:50:26 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned	int, char))
{
	unsigned int	i;
	char			*str;
	unsigned int	j;

	j = 0;
	if (!s || !f)
		return (0);
	i = ft_strlen (s);
	str = malloc((sizeof(char) * i) + 1);
	if (!str)
		return (NULL);
	while (i > j)
	{
		str[j] = (*f)(j, s[j]);
		j++;
	}
	str[j] = '\0';
	return (str);
}
