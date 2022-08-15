/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprester <cprester@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:51:02 by cprester          #+#    #+#             */
/*   Updated: 2022/08/15 20:01:26 by cprester         ###   ########.fr       */
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

typedef struct s_data
{
	char	**map;
	char	**av;
	int		ac;
	int		numb_of_rows;
}	t_data;

typedef struct s_textures
{
	char	**only_map;
	char	*no;
	char	*so;
	char	*we;
	char	*ea;
	char	*fl;
	char	*ceil;
	int		*fl_rgb;
	int		*ceil_rgb;
}	t_textures;

void		get_map(char *file, t_data *data);
void		ft_error(char *msg);

char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char *s, char c);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_substr(char const *s, int start, int len);
int			ft_strncmp(const char *s1, const char *s2, int n);
int			ft_atoi(const char *str);

int			check_split(char const *s, char c);
int			ft_strncmp(const char *s1, const char *s2, int n);
char		*ft_substr(char const *s, int start, int len);
char		*ft_strjoin(char *s1, char *s2);

char		*copy_from_ind(char *str, int n);
void		map_acumulation(t_data *data);

#endif
