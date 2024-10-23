/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:15:31 by abosc             #+#    #+#             */
/*   Updated: 2024/10/23 02:10:40 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	rest;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n > 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	rest = (n % 10) + '0';
	ft_putchar_fd(rest, fd);
	return ;
}