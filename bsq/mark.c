/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mark.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcayne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:57:19 by jalcayne          #+#    #+#             */
/*   Updated: 2019/10/23 15:12:34 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
int		ft_strlen(char *line);

int		ft_checkobs(char **map, char empty_char, int square, int start_x, int start_y)
{
	int	i;
	int	j;

	i = start_y;
	while (i < start_y + square)
	{
		j = start_x;
		while (j < start_x + square)
		{
			if (map[i][j] != empty_char)
				return (0);
			j++;
		}
		i++;
		j = 0;
	}
	return (1);
}

void	ft_changemap(char **map, char full, int square, int start_x, int start_y)
{
	int i;
	int j;

	i = start_y;
	while (i < start_y + square)
	{
		j = start_x;
		while (j < start_x + square)
		{
			map[i][j] = full;
			j++;
		}
		i++;
		j = 0;
	}
}

void	ft_mark(char **map, int num_lines, char empty_char, char full)
{
	int	num_col;
	int	a;
	int	square;
	int	start_x;
	int	start_y;

	square = num_lines;
	num_col = ft_strlen(map[0]);
	start_x = 0;
	start_y = 0;
	while (square > 0)
	{
		a = ft_checkobs(map, empty_char, square, start_x, start_y);
		start_x++;
		if (a == 0 && (start_x + square > num_col))
		{
			start_y++;
			start_x = 0;
			if (a == 0 && (start_y + square > num_lines))
			{
				start_y = 0;
				start_x = 0;
				square--;
			}
		}
		if (a == 1)
		{
			ft_changemap(map, full, square, start_x - 1, start_y);
			a = 0;
			while (a < num_lines)
			{
				ft_putstr(map[a]);
				a++;
			}
			break ;
		}
	}
}
