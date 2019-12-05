/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 14:57:48 by aortega-          #+#    #+#             */
/*   Updated: 2019/10/06 15:12:54 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	dibujo(int i, int j, int x, int y)
{
	if (((i == 1) || (i == x)) && (j == 1))
	{
		ft_putchar('A');
	}
	else if (((i == 1) || (i == x)) && (j == y))
	{
		ft_putchar('C');
	}
	else if (((i == 1) || (i == x)) || ((j == 1) || (j == y)))
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
			dibujo(i, j, x, y);
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
