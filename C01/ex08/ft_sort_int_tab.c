/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:53:17 by aortega-          #+#    #+#             */
/*   Updated: 2019/10/10 16:42:46 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = swap;
			i = 0;
		}
		else
			i++;
	}
}
