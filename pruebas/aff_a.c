/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 10:52:17 by aortega-          #+#    #+#             */
/*   Updated: 2019/10/24 11:36:22 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc != 2)
		write(1, "z\n", 2);
	else
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'z')
			{
				write(1, "z", 1);
				break;
			}
			else
			{	write(1, "z", 1);
				break;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
