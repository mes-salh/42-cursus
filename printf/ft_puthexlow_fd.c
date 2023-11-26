#include "ft_printf.h"

void	ft_puthexlow_fd(unsigned int n, int fd , int *j)
{
	char	hex;

	if (fd < 0)
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-', fd, j);
		if (*j == -1)
			return ;
		n = -n;
	}
	if (n >= 16)
	{
		ft_puthexlow_fd((n / 16), fd, j);
		if (*j == -1)
			return ;
	}
	hex = (n % 16) + '0';
	if (hex > '9')
		hex = hex + 39;
	ft_putchar_fd(hex, fd, j);
}
