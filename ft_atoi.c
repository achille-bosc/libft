/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:58:50 by abosc             #+#    #+#             */
/*   Updated: 2024/10/16 15:29:02 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	total;
	int	is_neg;

	i = 0;
	total = 0;
	is_neg = 1;
	if (nptr[i] == '-' || nptr[i] == '+' || ft_isdigit(nptr[i]))
	{
		if (nptr[i] == '-')
			is_neg *= -1;
		i++;
	}
	else
		return (0);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		total *= 10;
		total += (nptr[i] - '0');
		i++;
	}
	return (total * is_neg);
}
