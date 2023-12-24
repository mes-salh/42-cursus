/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:28:51 by mes-salh          #+#    #+#             */
/*   Updated: 2023/12/24 23:34:24 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char *buffer1, char *buffer2)// join and free
{
	char	*c;

	c = ft_strjoin(buffer1, buffer2);
	free(buffer1);
	buffer1 = NULL;
	return (c);
}

char	*ft_suivante(char *buffer)// delete line find
{
	int		i;
	int		j;
	char	*ligne;

	i = 0;
	j = 0;
	while (buffer[i] && buffer[i] != '\n')// find len of first line
		i++;
	if (!buffer[i])// if endofline == \0 return NULL
	{
		free(buffer);
		return (NULL);
	}
	ligne = ft_calloc((ft_strlen(buffer) - i + 1), 1);// len of file - len of firstline + 1
	i++;
	while (buffer[i])// line == buffer
		ligne[j++] = buffer[i++];
	free(buffer);
	return (ligne);
}

char	*ft_ligne(char *buffer)// take line for return
{
	char	*ligne;
	int		i;

	i = 0;
	if (!buffer[i])	// if no line return NULL
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')// go to the endofline
		i++;
	ligne = ft_calloc (i + 2, 1);// malloc to eol
	i = 0;
	while (buffer[i] && buffer[i] != '\n')	// line = buffer
	{
		ligne[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')// if endofline is \0 or \n, replace endofline by \n
		ligne[i++] = '\n';
	return (ligne);
}

char	*ft_lire(int fd, char *resultat)
{
	char	*buffer;
	int		lire;

	buffer = ft_calloc(BUFFER_SIZE + 1, 1);// malloc bufferzzz
	lire = 1;
	while (lire > 0)
	{
		lire = read(fd, buffer, BUFFER_SIZE);
		if (lire == -1)
		{
			free(buffer);
			buffer = NULL;
			free(resultat);
			resultat = NULL;
			return (NULL);
		}
		buffer[lire] = 0;// 0 end of buffer
		resultat = ft_free(resultat, buffer);// join and free
		if (ft_strchr(buffer, '\n'))//quit if \n find
			break ;
	}
	free(buffer);
	return (resultat);
}

char	*get_next_line(int fd)
{
	static char	*resultat;
	char		*ligne;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)// error handling
		return (free(resultat), resultat = NULL, NULL);
	resultat = ft_lire (fd, resultat);// read file
	if (!resultat)// if no line return NULL
		return (NULL);
	ligne = ft_ligne(resultat);// take line for return
	resultat = ft_suivante(resultat);// delete line find
	return (ligne);// return line
}
