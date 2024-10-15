/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:58:03 by abosc             #+#    #+#             */
/*   Updated: 2024/10/15 12:05:48 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = s;
	while (s[i] != c)
		i++;

	if (s[i] == c)
		return (str[i]);
	return (NULL);
}

int	main(void)
{
	strchr();
	return (0);
}