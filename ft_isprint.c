/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:02:04 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/03 18:02:07 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main (int ac, char **av)
{
    (void)ac;
    printf("result (mine) :%d\n", ft_isprint(av[1][0]));
    printf("result (original) :%d\n", isprint(av[1][0]));
    return 0;
}
*/
