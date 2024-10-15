/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:50:43 by abosc             #+#    #+#             */
/*   Updated: 2024/10/15 12:58:10 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

char	*strchr(const char *s, int c)
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
// 	printf("%s\n", strchr("abcdeabcdeabcdeab", 'c'));
// 	printf("%s\n", strchr("abcde", 'f'));

// 	return (0);
// }
