/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:28:20 by abosc             #+#    #+#             */
/*   Updated: 2024/10/15 12:44:58 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>

void	*memcpy(void *dest, const void *src, unsigned int n)
{
	int				i;
	unsigned char	*modifiable_src;
	unsigned char	*modifiable_dest;

	i = 0;
	modifiable_src = src;
	modifiable_dest = dest;
	while (i < n)
	{
		modifiable_dest[i] = modifiable_src[i];
		i++;
	}
	return (dest);
}
