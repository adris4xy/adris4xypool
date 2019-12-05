/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcayne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:01:42 by jalcayne          #+#    #+#             */
/*   Updated: 2019/10/23 15:22:05 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str);
int		ft_atoi(char *str);
struct	parameters
{
	int		num_lines;
	char	empty_char;
	char	obstacle;
	char	full;
	int		num_col;
};

char	*ft_reader(char *str, char *file_name, int file_size)
{
	int fd;
	int nr_bytes;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		ft_putstr("map error\n");
	else
	{
		nr_bytes = read(fd, str, file_size);
		close(fd);
		if (nr_bytes == 0)
			ft_putstr("map error\n");
	}
	return (str);
}

int		ft_parameters(char *str, struct parameters *param)
{
	int		i;
	int		size;
	char	*number;

	i = 0;
	size = 0;
	while (str[size] > 32 && str[size] < 127)
		size++;
	number = (char *)malloc(sizeof(number) * size);
	while (i < size - 3)
	{
		number[i] = str[i];
		i++;
	}
	param->num_lines = ft_atoi(number);
	free(number);
	param->empty_char = str[size - 3];
	param->obstacle = str[size - 2];
	param->full = str[size - 1];
	i = size + 1;
	if (param->empty_char == param->obstacle
	|| param->empty_char == param->obstacle
	|| param->obstacle == param->full)
		ft_putstr("map error\n");
	while (str[i] >= 32 && str[i] < 127)
		i++;
	param->num_col = i - (size + 1);
	return (size + 1);
}

char	**maping(char **map, char *str, struct parameters param, int size)
{
	int i;
	int j;
	int k;

	i = size;
	j = 0;
	k = 0;
	while (str[i])
	{
		while (j <= param.num_col)
		{
			map[k][j] = str[i];
			j++;
			i++;
		}
		map[k][j] = '\0';
		j = 0;
		k++;
	}
	return (map);
}
