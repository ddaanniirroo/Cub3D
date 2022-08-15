/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprester <cprester@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:18:13 by cprester          #+#    #+#             */
/*   Updated: 2022/08/15 20:02:04 by cprester         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void	check_filename(char *name)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(name);
	if (len > 254)
		ft_error("Invailid filename: too many characters");
	while (name[i] != '\0')
	{
		if (name[i] == '?' || name[i] == '<' || name[i] == '>'
			|| name[i] == '*' || name[i] == '"' || name[i] == '|')
			ft_error("Invalid filename: illegal characters");
		i++;
	}
	if (name[len-4] != '.' || name[len-3] != 'c' || name[len-2] != 'u' || name[len-1] != 'b')
		ft_error("Invalid filename: file must have format \".cub\" ");

}

void	check_param(int ac, char **av)
{
	if (ac != 2)
		ft_error("Invalid numbers of arguments");
	check_filename(av[1]);
}

int main(int ac, char **av)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	data->ac = ac;
	data->av = av;
	check_param(ac, av);
	get_map(av[1], data);
}
