/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 04:47:15 by achillebosc       #+#    #+#             */
/*   Updated: 2024/11/18 00:57:11 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_formats(va_list args, const char format)
{
	int		print_length;
	char	*str;

	print_length = 0;
	if (format == 'c')
		print_length += ft_printchar(va_arg(args, int));
	else if (format == 's')
	{
		str = va_arg(args, char *);
		print_length += ft_strlen(str);
		ft_putstr_fd(str, 1);
	}
	else if (format == 'p')
		print_length += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_length += ft_print_nbr(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		print_length += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == 'X')
		print_length = ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_length += ft_printchar('%');
	return (print_length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' )
		{
			print_length += ft_formats(args, str[i + 1]);
			i++;
		}
		else
		{
			print_length += ft_printchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (print_length);
}
