/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprester <cprester@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:20:37 by cprester          #+#    #+#             */
/*   Updated: 2022/08/14 21:21:52 by cprester         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if (s[0] == (unsigned char)c)
		return ((char *)s);
	while (s[i] != '\0')
	{
		i++;
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
	}
	return (NULL);
}
