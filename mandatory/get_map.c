/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprester <cprester@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:27:38 by cprester          #+#    #+#             */
/*   Updated: 2022/08/15 13:40:39 by cprester         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void	get_map(t_data *data)
{
	char	*line;
	int		fd;

	fd = open(data->file, O_RDONLY);
	if (fd == -1)
		ft_error(NULL, "Can't open file");
	line = get_next_line(fd);
	data->map = ft_split(line, '\n');
	int i = 0;
	while(data->map[i])
	{
		printf("%s", data->map[i]);
		i++;
	}
}