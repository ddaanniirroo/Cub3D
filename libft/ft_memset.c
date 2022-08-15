/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprester <cprester@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:20:14 by cprester          #+#    #+#             */
/*   Updated: 2022/08/14 21:22:11 by cprester         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	void	*d;

	d = b;
	i = 0;
	while (i < len)
	{
		*(unsigned char *)(d + i) = (unsigned char)c;
		i++;
	}
	return (d);
}
