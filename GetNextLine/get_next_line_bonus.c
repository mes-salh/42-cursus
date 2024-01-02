/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 03:16:46 by mes-salh          #+#    #+#             */
/*   Updated: 2024/01/02 16:19:54 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	ft_free(char **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
	}
}

char	*ft_get_the_next(char *result)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	j = 0;
	while (result[i] && result[i] != '\n')
		i++;
	if (!result[i])
	{
		ft_free(&result);
		return (NULL);
	}
	line = ft_calloc((ft_strlen(result) - i + 1), 1);
	i++;
	while (result[i])
		line[j++] = result[i++];
	ft_free(&result);
	return (line);
}

char	*ft_get_the_line(char *result)
{
	char	*getline;
	int		i;

	i = 0;
	if (!result[i])
		return (NULL);
	while (result[i] && result[i] != '\n')
		i++;
	if (result[i] == '\n')
		getline = ft_calloc (i + 2, 1);
	else
		getline = ft_calloc (i + 1, 1);
	i = 0;
	while (result[i] && result[i] != '\n')
	{
		getline[i] = result[i];
		i++;
	}
	if (result[i] && result[i] == '\n')
		getline[i++] = '\n';
	return (getline);
}

char	*ft_read_line(int fd, char *result)
{
	char	*buffer;
	int		i;
	char	*tmp;

	buffer = ft_calloc((size_t)BUFFER_SIZE + 1, 1);
	i = 1;
	while (i > 0)
	{
		i = read(fd, buffer, BUFFER_SIZE);
		if (i == -1)
		{
			ft_free(&buffer);
			ft_free(&result);
			return (NULL);
		}
		buffer[i] = 0;
		tmp = result;
		result = ft_strjoin(result, buffer);
		ft_free(&tmp);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	ft_free(&buffer);
	return (result);
}

char	*get_next_line(int fd)
{
	static char	*result[BUFFER_MAX];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0 || fd > BUFFER_MAX)
	{
		if (fd < 0 || fd > BUFFER_MAX)
			return (NULL);
		return (free(result[fd]), result[fd] = NULL, NULL);
	}
	result[fd] = ft_read_line (fd, result[fd]);
	if (!result[fd])
		return (NULL);
	line = ft_get_the_line(result[fd]);
	result[fd] = ft_get_the_next(result[fd]);
	return (line);
}
