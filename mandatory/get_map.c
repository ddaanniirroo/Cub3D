/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprester <cprester@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:27:38 by cprester          #+#    #+#             */
/*   Updated: 2022/08/15 20:01:45 by cprester         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

char	*copy_from_ind(char *str, int n)
{
	char	*res;
	int		len;
	int		i;
	int		j;

	i = n;
	j = 0;
	len = ft_strlen(str);
	res = malloc(sizeof(char *) * (len - n + 1));
	while (i <= len)
	{
		res[j] = str[i];
		i++;
		j++;
	}
	return res;
}

void	map_acumulation(t_data *data)
{
	t_textures *tex;
	int			i;
	int			len;

	tex = malloc(sizeof(t_textures));
	if (!tex)
		ft_error("LOH");
	tex->no = copy_from_ind(data->map[0], 3);
	tex->so = copy_from_ind(data->map[1], 3);
	tex->we = copy_from_ind(data->map[2], 3);
	tex->ea = copy_from_ind(data->map[3], 3);
	tex->fl = copy_from_ind(data->map[4], 2);
	tex->ceil = copy_from_ind(data->map[5], 2);
	i = 0;
	tex->only_map = malloc(sizeof(char **) * (data->numb_of_rows - 6));
	while (i < data->numb_of_rows - 6)
	{
		len = ft_strlen(data->map[i+6]);
		tex->only_map[i] = malloc(sizeof(char *) * len);
		tex->only_map[i] = copy_from_ind(data->map[i+6], 0);
		i++;
	}
	i = 0;
	while(i < 14)
	{
		printf("%s\n", tex->only_map[i]);
		i++;
	}

}

void	get_map(char *file, t_data *data)
{
	char	*read;
	char	*line;
	int		fd;

	data->numb_of_rows = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_error("can't open map file");
	read = NULL;
	line = get_next_line(fd);
	while (line)
	{
		read = ft_strjoin(read, line);
		free(line);
		line = get_next_line(fd);
		data->numb_of_rows++;
	}
	close(fd);
	free(line);
	line = ft_strtrim(read, " \n");
	free(read);
	data->map = ft_split(line, '\n');
	map_acumulation(data);
}
