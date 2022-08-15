/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprester <cprester@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:19:02 by cprester          #+#    #+#             */
/*   Updated: 2022/08/14 21:22:11 by cprester         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	bs_arr[12];
	int		i;
	int		neg;

	i = 10;
	if (n == 0)
		bs_arr[i--] = '0';
	neg = 1;
	if (n < 0)
		neg = -1;
	while (n != 0)
	{
		bs_arr[i] = neg * (n % 10) + '0';
		n /= 10;
		i--;
	}
	if (neg == -1)
		bs_arr[i--] = '-';
	while (i >= 0)
		bs_arr[i--] = ' ';
	bs_arr[11] = '\0';
	return (ft_strtrim(bs_arr, " "));
}
