/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcayne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:51:27 by jalcayne          #+#    #+#             */
/*   Updated: 2019/10/23 13:44:04 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;
	char	letra;

	i = 0;
	while (str[i])
	{
		letra = str[i];
		write(1, &letra, 1);
		i++;
	}
}

int		ft_atoi(char *str)
{
	int negative;
	int res;
	int i;

	negative = 1;
	res = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (str[i] == '-')
			negative = -1;
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * negative);
}

int		ft_strlen(char *line)
{
	unsigned int i;

	i = 0;
	while (line[i] != '\0')
		i++;
	return (i);
}
