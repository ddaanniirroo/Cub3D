/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprester <cprester@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:51:02 by cprester          #+#    #+#             */
/*   Updated: 2022/08/15 13:39:41 by cprester         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB_H
# define CUB_H

# include "../mlx/mlx.h"
# include <math.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../gnl/get_next_line.h"
# include "../libft/libft.h"

typedef struct s_data
{
	char	**map;
	char	**av;
	char	*file;
	int		ac;
}	t_data;

void	get_map(t_data *data);
void	ft_error(t_data *data, char *msg);

#endif