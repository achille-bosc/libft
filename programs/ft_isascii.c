/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:13:43 by abosc             #+#    #+#             */
/*   Updated: 2024/10/14 13:29:27 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <libft.h>
// #include <stdio.h>

int	ft_isdigit(unsigned char c)
{
	if (c < 128)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%i", ft_isdigit(254));
// 	return (0);
// }
