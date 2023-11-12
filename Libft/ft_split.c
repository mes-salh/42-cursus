/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:22:13 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/12 16:13:40 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		sep;
	int		count;

	i = 0;
	sep = 1;
	count = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c && sep == 1)
		{
			sep = 0;
			count++;
		}
		else if (s[i] == c)
		{
			sep = 1;
		}
		i++;
	}
	array = (char **)malloc ((count + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		if (!s)
			break;
	}
}
