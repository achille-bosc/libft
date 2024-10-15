/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:45:28 by abosc             #+#    #+#             */
/*   Updated: 2024/10/15 11:55:06 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
// #include <stdio.h>

int	ft_toupper(int c)
{
	char	up_c;

	if ((c > 96 && c < 123))
	{
		up_c = c - 32;
	}
	else
	{
		up_c = c;
	}
	return (up_c);
}

// int	main(void)
// {
// 	printf("%c", ft_toupper('a'));
// 	return (0);
// }
