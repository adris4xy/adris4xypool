/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 18:22:52 by aortega-          #+#    #+#             */
/*   Updated: 2019/10/06 11:23:14 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	dibujito(int i, int j, int x, int y)
{
	if (((j == 1) || (j == y)) && (i == 1))
	{
		ft_putchar('A');
	}
	else if (((j == 1) || (j == y)) && (i == x))
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
	if (x > 0 && x > 0)
	{
		while (j <= y)
		{
			dibujito(i, j, x, y);
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
