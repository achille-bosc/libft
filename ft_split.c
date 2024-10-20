/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 00:52:40 by abosc             #+#    #+#             */
/*   Updated: 2024/10/20 16:27:55 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t    ft_countwords(char const *s, char c)
{
    size_t    count;

    if (!*s)
        return (0);
    count = 0;
    while (*s)
	{
        while (*s == c)
            s++;
        if (*s)
            count ++;
        while (*s != c && *s)
            s++;
	}
    return (count);
}

char    **ft_split(char const *s, char c)
{
    char    **split;
    size_t    len;
    int        i;

    split = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
    if (!s || !split)
        return (0);
    i = 0;
    while (*s)
    {
        while (*s == c && *s)
            s++;
        if (*s)
        {
            if (!ft_strchr(s, c))
                len = ft_strlen(s);
            else
                len = ft_strchr(s, c) - s;
            split[i++] = ft_substr(s, 0, len);
            s += len;
        }
    }
    split[i] = NULL;
    return (split);
}