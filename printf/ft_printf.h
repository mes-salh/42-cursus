#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putstr_fd(char *s, int fd, int *j);
void	ft_putnbr_fd(int n, int fd, int *j);
void	ft_putchar_fd(char c, int fd, int *j);
int		ft_printf(const char *, ...);
void	ft_puthexlow_fd(unsigned int n, int fd , int *j);
void	ft_puthexup_fd(unsigned int n, int fd , int *j);
void	ft_putnbru_fd(unsigned int n, int fd , int *j);
void	ft_putadd(void *ptr, int fd , int *j);

#endif
