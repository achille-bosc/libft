/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:55:19 by abosc             #+#    #+#             */
/*   Updated: 2024/10/15 11:57:44 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
// #include <stdio.h>

int	ft_tolower(int c)
{
	char	up_c;

	if (c > 64 && c < 91)
	{
		up_c = c + 32;
	}
	else
	{
		up_c = c;
	}
	return (up_c);
}

// int	main(void)
// {
// 	printf("%c", ft_tolower('A'));
// 	return (0);
// }
