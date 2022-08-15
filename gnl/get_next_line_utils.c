/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprester <cprester@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:17:36 by cprester          #+#    #+#             */
/*   Updated: 2022/08/15 13:35:01 by cprester         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen_1(char const *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
			i++;
	}
	return (i);
}

char	*ft_strdup_1(char *src, int flag)
{
	char	*str;
	int		i;

	i = 0;
	if (!src)
		return (NULL);
	str = malloc(sizeof(char) * ft_strlen_1(src) + 1 + flag);
	if (!str)
		return (NULL);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	if (flag)
	{
		str[i] = '\n';
		free(src);
	}
	str[i + flag] = '\0';
	return (str);
}

char	*ft_strchr(char const *str, int n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)str;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)n)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (unsigned char)n)
		return ((char *)&s[i]);
	return (NULL);
}

size_t	ft_strcpy(char *dest, char const *src)
{
	size_t	i;

	i = 0;
	if (!dest)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
