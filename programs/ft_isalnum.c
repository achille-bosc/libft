/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:04:10 by abosc             #+#    #+#             */
/*   Updated: 2024/10/14 13:31:19 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <libft.h>
#include <stdio.h>

int	ft_isalnum(unsigned char c)
{
	if ((c >= '0' && c <= '9')
		|| ((c >= 'A' && c <= 'Z')
			|| (c >= 'a' && c <= 'z')))
		return (8);
	return (0);
}

// int	main(void)
// {
// 	printf("%i", ft_isalnum('a'));
// 	return (0);
// }

	// printf("%i", ft_isdigit('a'));