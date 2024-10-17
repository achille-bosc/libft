/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:07:29 by abosc             #+#    #+#             */
/*   Updated: 2024/10/17 16:45:14 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total_len;
	char	s3;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	s3 = malloc(sizeof(char) * total_len);
	return (s3);
}
