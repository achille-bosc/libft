/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:10:33 by abosc             #+#    #+#             */
/*   Updated: 2024/10/16 15:25:47 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;
	int		len_little;

	i = 0;
	len_little = ft_strlen((char *)little);
	if (len_little == 0)
		return ((char *)big);
	while (i < len && *big)
	{
		j = 0;
		while (j < len_little)
		{
			if (big[j] != little[j])
				break ;
			j++;
		}
		if (j == len_little)
			return ((char *)big);
		i++;
		big++;
	}
	return (NULL);
}
