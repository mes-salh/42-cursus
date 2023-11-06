/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-salh <mes-salh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:02:35 by mes-salh          #+#    #+#             */
/*   Updated: 2023/11/03 18:02:38 by mes-salh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
    printf("result (mine) :%d\n", ft_isascii(av[1][0]));
    printf("result (original) :%d\n", isascii(av[1][0]));
    return 0;
}

*/
