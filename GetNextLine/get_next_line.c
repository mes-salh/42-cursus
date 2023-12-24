/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:28:51 by mes-salh          #+#    #+#             */
/*   Updated: 2023/12/24 16:44:41 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char *buffer1, char *buffer2)
{
	char	*c;

	c = ft_strjoin(buffer1, buffer2);
	free(buffer1);
	return (c);
}

char	*ft_suivante(char *buffer)
{
	int		i;
	int		j;
	char	*ligne;

	i = 0;
	j = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	ligne = ft_calloc((ft_strlen(buffer) - i + 1), 1);
	i++;
	while (buffer[i])
		ligne[j++] = buffer[i++];
	free(buffer);
	return (ligne);
}

char	*ft_ligne(char *buffer)
{
	char	*ligne;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	ligne = ft_calloc (i + 2, 1);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		ligne[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
		ligne[i++] = '\n';
	return (ligne);
}

char	*ft_lire(int fd, char *resultat)
{
	char	*buffer;
	int		lire;

	if (!resultat)
		resultat = ft_calloc(1, 1);
	buffer = ft_calloc(BUFFER_SIZE + 1, 1);
	lire = 1;
	while (lire > 0)
	{
		lire = read(fd, buffer, BUFFER_SIZE);
		if (lire == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[lire] = '\0';
		resultat = ft_free(resultat, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (resultat);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*ligne;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = ft_lire (fd, buffer);
	if (!buffer)
		return (NULL);
	ligne = ft_ligne(buffer);
	buffer = ft_suivante(buffer);
	return (ligne);
}
