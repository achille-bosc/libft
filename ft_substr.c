/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:55:54 by abosc             #+#    #+#             */
/*   Updated: 2024/10/17 17:04:01 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i < start)
	{
		s++;
		i++;
	}
	s = malloc(sizeof(char *) * (len + 1));
	if (!s)
		return (NULL);
	return ((char *)s);
}
