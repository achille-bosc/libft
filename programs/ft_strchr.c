/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:58:03 by abosc             #+#    #+#             */
/*   Updated: 2024/10/15 12:43:55 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

char	*strchr(const char *s, int c)
{
	char	*str;

	while (*s != c && *s)
		s++;
	if (*s == c)
		return ((char *)s);
	return (0);
}

// int	main(void)
// {
// 	printf("%s\n", strchr("abcde", 'c'));
// 	printf("%s\n", strchr("abcde", 'f'));

// 	return (0);
// }
