/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 16:57:46 by aortega-          #+#    #+#             */
/*   Updated: 2019/10/06 18:31:40 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	cuadradito(int x, int y, int i, int j)
{
	if (((i == 1) || (i == x)) && ((j == 1) || (j == y)))
	{
		ft_putchar('o');
	}
	else if ((i == 1) || (i == x))
	{
		ft_putchar('|');
	}
	else if ((j == 1) || (j == y))
	{
		ft_putchar('-');
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
			cuadradito(x, y, i, j);
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
