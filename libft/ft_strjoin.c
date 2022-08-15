/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprester <cprester@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:20:44 by cprester          #+#    #+#             */
/*   Updated: 2022/08/14 21:21:56 by cprester         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	int		first_len;
	int		second_len;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	first_len = ft_strlen(s1);
	second_len = ft_strlen(s2);
	strjoin = malloc(sizeof(char) * (first_len + second_len + 1));
	if (strjoin == NULL)
		return (NULL);
	while (i < first_len)
	{
		strjoin[i] = s1[i];
		i++;
	}
	while (i < (first_len + second_len))
	{
		strjoin[i] = s2[i - first_len];
		i++;
	}
	strjoin[i] = '\0';
	return (strjoin);
}
