/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momo <momo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:05:26 by mbertin           #+#    #+#             */
/*   Updated: 2022/08/30 17:31:35 by momo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include "libft.h"

typedef struct s_map
{
	char		**map;
	int			x;
	int			y;
	int			fd;
	int			c;
	int			p;
	int			e;
	void		*close_door;
	void		*open_door;
	void		*slime;
	void		*wooden;
	void		*wall;
	void		*coin;
	void		*mlx;
	char		*addr;
	void		*win;
	int			img_width;
	int			img_height;
	int			pos_x;
	int			pos_y;
	int			i;
	size_t		j;
}	t_map;

/*
	map[x][y] : x pour les lignes y pour les colonnes.
	C pour un item à collecter (C pour collectible),
	E pour une sortie (E pour exit),
	P pour la position de départ du personnage.
*/

void	print_map(t_map *map);
void	size_map_vertical(t_map *map);
void	check_rectangle(t_map *map);
void	check_wall_horizontal(t_map *map);
void	check_wall_vertical(t_map *map);
void	check_unknow_set(t_map *map);
void	count_set(t_map *map);
void	check_error_number_set(t_map *map);
void	check_arg(int *argc, char const *argv);
void	ft_graphic_put(t_map *map);
void	xpm_to_image(t_map *map);
void	image_to_window(t_map *map);
void	image_to_window_part_two(t_map *map);
int		key_identification(int key, t_map *map);
int		esc_game(void);
void	check_right(t_map *map);
void	check_left(t_map *map);
void	check_up(t_map *map);
void	check_down(t_map *map);
void	move_right(t_map *map);
void	move_left(t_map *map);
void	move_up(t_map *map);
void	move_down(t_map *map);
void	win_game(void);

#endif