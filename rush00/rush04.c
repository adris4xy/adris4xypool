/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 18:51:12 by aortega-          #+#    #+#             */
/*   Updated: 2019/10/06 13:23:54 by lucimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	marco(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) ||
		((i == x && j == y) && (x != 1 || y == 1) && (x == 1 || y != 1)))
	{
		ft_putchar('A');
	}
	else if ((i == x && j == 1) || (i == 1 && j == y))
	{
		ft_putchar('C');
	}
	else if (i == 1 || j == 1 || i == x || j == y)
	{
		ft_putchar('B');
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
				i = 1;
				j++;
				ft_putchar('\n');
			}
		}
	}
}
