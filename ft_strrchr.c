/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:50:43 by abosc             #+#    #+#             */
/*   Updated: 2024/10/15 15:17:18 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	while (*s)
	{
		if (s[0] == c)
			str = (char *)s;
		s++;
	}
	if (*str == c)
		return (str);
	return (0);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strrchr("abcdeabcdeabcdeab", 'c'));
// 	printf("%s\n", ft_strrchr("abcde", 'f'));

// 	return (0);
// }
