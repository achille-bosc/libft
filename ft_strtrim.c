/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:14:00 by abosc             #+#    #+#             */
/*   Updated: 2024/10/22 22:10:45 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// TODO: Insert file in Makefile file  and libft.h file

// char	*del_start(char *s1, char *set)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	while (set[i])
// 	{
// 		if (set[i] != s1[i])
// 			return (s1);
// 		i++;
// 	}
// 	while (j < i)
// 	{
// 		s1++;
// 		j++;
// 	}
// 	return (s1);
// }

// char	*del_end(char *s1, char *set)
// {
// 	int	i;
// 	int	j;

// 	i = ft_strlen(s1) - ft_strlen(set) - 1;
// 	j = 0;
// 	while (set[j])
// 	{
// 		if (set[j] != s1[i])
// 			return (s1);
// 		i++;
// 		j++;
// 	}
// 	s1[ft_strlen(s1) - ft_strlen(set) - 1] = '\0';
// 	return (s1);
// }

// int	calcul_final_size(char	*s1, char *set)
// {
// 	int	total;
// 	int	i;

// 	i = 0;
// 	while (i < ft_strlen(set))
// 		if (set[i] != s1[i])
// 			total -= 1;
// 	total += 1;
// 	i = 0;
// 	while (s1[i])
// 	{
// 		if (s1[ft_strlen(s1) - ft_strlen(set) - 1 + i] != set[i])
// 			total -= 1;
// 	}
// 	total += 1;
// }

static int	is_c_in_set(char c, char	*set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] != c)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*s2;

	printf("test");
	i = 0;
	j = ft_strlen((char *)s1) - 1;
	if (set == NULL)
		return ((char *)s1);
	printf("test");
	while (is_c_in_set(s1[i], (char *)set) == 1)
		i++;
	while (is_c_in_set(s1[j], (char *)set) == 1)
		j--;
	s2 = ft_calloc(j - i, sizeof(char));
	if (!s2)
		return (NULL);
	while (i <= j)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
