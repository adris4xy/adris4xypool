/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcayne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:08:45 by jalcayne          #+#    #+#             */
/*   Updated: 2019/10/23 17:22:54 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

struct	parameters
{
	int		num_lines;
	char	empty_char;
	char	obstacle;
	char	full;
	int		num_col;
};

void	ft_mark(char **map, int num_lines, char empty_char, char full);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
char	*ft_reader(char *str, char *file_name, int file_size);
int		ft_parameters(char *str, struct parameters *param);
char	**maping(char **map, char *str, struct parameters param, int size);

char	*stop_jump(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\n')
		i++;
	str[i] = '\0';
	return(str);
}

int		main(int argc, char **argv)
{
	char				*str;
	int					i;
	int					j;
	struct parameters	param;
	int					size;
	char				**map;
	char				*yuyee;

	str = (char *)malloc(1000);
	yuyee = (char *)malloc(50);
	j = 0;
	i = 1;
	if (argc == 1)
	{
		ft_putstr("What is your file name?:\n");
		read(1, yuyee, 50);
		i = 0;
		yuyee = stop_jump(yuyee);
	}
	while (i < argc)
	{
		if (argc == 1)
			str = ft_reader(str, yuyee, 1000);
		else
			str = ft_reader(str, argv[i], 1000);
		size = ft_parameters(str, &param);
		map = (char **)malloc(10 * param.num_lines);
		while (j <= param.num_lines)
		{
			map[j] = (char *)malloc(10 * param.num_col);
			j++;
		}
		map = maping(map, str, param, size);
		j = 0;
		ft_mark(map, param.num_lines, param.empty_char, param.full);
		i++;
		ft_putstr("\n");
	}
	free(map);
	free(str);
	free(yuyee);
	return (0);
}
