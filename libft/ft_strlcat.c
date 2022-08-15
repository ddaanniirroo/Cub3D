/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprester <cprester@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:20:47 by cprester          #+#    #+#             */
/*   Updated: 2022/08/14 21:22:01 by cprester         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (dstsize > 0 && (dstsize - 1 >= dst_len))
	{
		while (dst_len + i != dstsize - 1 && src[i] != '\0')
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		if (dstsize >= dst_len)
			dst[dst_len + i] = '\0';
		return (src_len + dst_len);
	}
	return (src_len + dstsize);
}
