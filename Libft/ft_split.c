/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:22:13 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/15 16:03:31 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	mes_len(const char *s, char c)
{
	int	existe;
	int	counter;

	existe = 0;
	counter = 0;
	while (*s != '\0')
	{
		if (*s != c && existe == 0)
		{
			existe = 1;
			counter++;
		}
		else if (*s == c)
		{
			existe = 0;
		}
		s++;
	}
	return (counter);
}

char	**mes_free(char **array, int size)
{
	int	i;

	i = 0;
	while (i < size && array[i] != NULL)
	{
		free(array[i]);
		array[i] = NULL;
		i++;
	}
	if (array != NULL)
	{
		free(array);
		array = NULL;
	}
	return (NULL);
}

char	*mes_findndcpy(char const *s, char c, int i)
{
	int		j;
	char	*str;
	int		len;

	j = 0;
	len = 0;
	while (s[i + len] != c && s[i + len])
		len++;
	str = (char *)malloc((len + 1));
	if (!str)
		return (NULL);
	while (s[i] != c && s[i])
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	**mes_allocat(char const *s, char c, char **array, int wordscount)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (j < wordscount)
	{
		while (s[i] == c && s[i])
			i++;
		array[j] = mes_findndcpy(s, c, i);
		if (!array[j])
		{
			mes_free(array, wordscount);
			return (NULL);
		}
		while (s[i] != c && s[i])
			i++;
		j++;
	}
	array[wordscount] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		wordscount;

	if (!s)
		return (NULL);
	wordscount = mes_len(s, c);
	array = (char **)malloc ((wordscount + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	return (mes_allocat(s, c, array, wordscount));
}

// int main()
// {
// 	char *s = "hello$$$$$$$$$  world   $Im Tayfoon $$$$$$$$$$$$$$$$$";
// 	char c = '$';
// 	char **res = ft_split(s, c);
// 	printf("%s", res[0]);
// 	free(res);
// 	return (0);
// }
