/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprester <cprester@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:18:41 by cprester          #+#    #+#             */
/*   Updated: 2022/08/14 21:22:11 by cprester         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	atoi_error(void)
{
	write(2, "Error\nft_atoi\n", 6);
	exit(EXIT_FAILURE);
}

int	ft_atoi(const char *str)
{
	int		neg;
	ssize_t	num;
	size_t	i;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
		if (!ft_isdigit(str[i]))
			atoi_error();
	}
	while (ft_isdigit(str[i]))
	{
		num = num * 10 + neg * (str[i++] - '0');
		if (num < -2147483648 || num > 2147483647)
			atoi_error();
	}
	neg = num;
	return (neg);
}
