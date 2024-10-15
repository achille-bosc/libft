/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:26:21 by abosc             #+#    #+#             */
/*   Updated: 2024/10/15 12:44:21 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <unistd.h>
// #include <stdio.h>

void	*ft_memset(void *s, unsigned int n)
{
	unsigned int	i;
	unsigned char	*modifiable_s;

	modifiable_s = s;
	i = 0;
	while (i < n)
	{
		modifiable_s[i] = '\0';
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	str[50] = "Hello World";

// 	printf("Original string: %s\n", str);

// 	ft_memset(str, 5);

// 	printf("Modified string: %s\n", str);
// 	return (0);
// }
