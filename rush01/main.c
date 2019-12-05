/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 10:22:08 by aortega-          #+#    #+#             */
/*   Updated: 2019/10/13 19:38:35 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int		ft_rm_sp(char *str)
{
	int *arr2;
	int i;
	int j;

	arr2 = malloc(16*4);
	i = 0;
	j = i;
	while(str[i] != 0)
	{
		if(str[i] >= '1' && str[i] <= '4')
		{
			arr2[j] = str[i] - 48;
			write(1, arr2 + j, 1);
			j++;
		}
		i++;
	}
	return (0);
}*/

int	*ft_str_is_numeric(char *str)
{
	int *v;
	int i;
	int j;
	
	v = malloc(16 * 4);

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] >= '1' && str[i] <= '4')
		{
			v[j] = str[i];
			j++;
		}
		i++;
	}

	return (v);
}

int		ft_check_frame(char *str)
{
	int valid_frame;
	int *v;
	int i;

	v = ft_str_is_numeric(str);
	valid_frame = 1;
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] < '1' &&  str[i] > '4')
		{
			valid_frame = 0;
		}
		i++;
	}
	return valid_frame;
}

void	ft_travel_frame(char *str)
{
	while (*str)
	{
		if(*str < '5' && *str > '0')
		{
			ft_putchar(*str);
			str++;
		}
	}
}

/*int		ft_fill_grid(char *str)
{
	int grid_has_solution;
	

	grid_has_solution = 1;
	
	return grid_has_solution;
}*/

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('E');
		return (0);
	}
	if (ft_check_frame(argv[1]) == 0)
	{
		ft_putchar('E');
		return (0);
	}
	else
	{
		ft_travel_frame(argv[1]);
		//ft_fill_grid(argv[1]);
	}
	return (0);
}
