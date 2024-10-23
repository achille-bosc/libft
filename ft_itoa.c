/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:41:47 by abosc             #+#    #+#             */
/*   Updated: 2024/10/23 02:13:28 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len_int_max;
	int		is_neg;

	len_int_max = 12;
	is_neg = 0;
	str = (char *)ft_calloc(len_int_max, sizeof(char));
	if (n < 0)
		is_neg = 1;
	i = len_int_max - 2;
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	if (is_neg)
		str[i] = '-';
	while (!str)
		str++;
	return (str);
}
