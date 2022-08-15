/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprester <cprester@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:20:26 by cprester          #+#    #+#             */
/*   Updated: 2022/08/14 21:22:11 by cprester         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 0)
		n *= -1;
	else
		ft_putchar_fd('-', fd);
	if (n < -9)
	{
		ft_putnbr_fd((n / 10) * (-1), fd);
		ft_putnbr_fd((n % 10) * (-1), fd);
	}
	else
		ft_putchar_fd((n * (-1) + '0'), fd);
}
