/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprester <cprester@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:13:58 by cprester          #+#    #+#             */
/*   Updated: 2022/08/15 13:29:20 by cprester         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void	ft_error(t_data *data, char *msg)
{
	printf("error: %s\n", msg);
	// if (data)
	// 	free_all(data);
	exit(EXIT_FAILURE);
}
