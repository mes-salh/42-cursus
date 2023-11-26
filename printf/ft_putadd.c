#include "ft_printf.h"

void	ft_puthx(unsigned int n, int fd, int *j)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
	{
		ft_puthx((n / 16), fd, j);
		if (*j == -1)
			return ;
	}
	ft_putchar_fd(hex[n % 16], fd, j);
}
void	ft_putadd(void *ptr, int fd , int *j)
{
	unsigned long	n;
	char			*hex;

	hex = "0123456789abcdef";
	n = (unsigned long)ptr;
	ft_putstr_fd("0x", fd, j);
	if (*j == -1)
		return ;
	if (ptr == NULL)
	{
		ft_putstr_fd("0", fd, j);
		return ;
	}
	ft_puthx(n, fd, j);
}
