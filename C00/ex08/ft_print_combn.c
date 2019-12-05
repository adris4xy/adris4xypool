/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:34:34 by aortega-          #+#    #+#             */
/*   Updated: 2019/10/10 12:50:56 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_imp(char n, char numbers[])
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		ft_putchar(numbers[i]);
		i--;
	}
	if ((numbers[0] != '9') || (numbers[n - 1] != (('9' - n) + 1)))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_loop(int n, char numbers[])
{
	int j;

	while ((numbers[0] <= '9') || (numbers[n - 1] <= (('9' - n) + 1)))
	{
		j = 0;
		ft_imp(n, numbers);
		numbers[0]++;
		if (numbers[0] > '9')
		{
			while (j < n - 1)
			{
				if (numbers[j] > ('9' - j))
					numbers[j + 1]++;
				j++;
			}
			while (j >= 1)
			{
				if (numbers[j - 1] > ('9' - j) + 1)
					numbers[j - 1] = numbers[j] + 1;
				j--;
			}
		}
	}
}

void	ft_print_combn(int n)
{
	int		i;
	char	num;
	char	numbers[9];

	i = n - 1;
	num = '0';
	while (i >= 0)
	{
		numbers[i] = num;
		num++;
		i--;
	}
	ft_loop(n, numbers);
}
