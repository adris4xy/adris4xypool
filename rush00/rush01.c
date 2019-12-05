/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucimart <lucimart@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 11:29:11 by lucimart          #+#    #+#             */
/*   Updated: 2019/10/06 18:45:55 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	marco(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) ||
		((i == x && j == y) && (x != 1 && y != 1)))
	{
		ft_putchar('/');
	}
	else if ((i == x && j == 1) || (i == 1 && j == y))
	{
		ft_putchar('\\');
	}
	else if (i == 1 || j == 1 || i == x || j == y)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (x > 0 && y > 0)
	{
		while (j <= y)
		{
			marco(i, j, x, y);
			i++;
			if (i > x)
			{
				ft_putchar('\n');
				i = 1;
				j++;
			}
		}
	}
}
