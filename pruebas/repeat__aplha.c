/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat__aplha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 10:13:43 by aortega-          #+#    #+#             */
/*   Updated: 2019/10/24 10:49:39 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int i;
	int letter;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			letter = 0;
			if (argv[1][i] >= 'A' && 'Z' >= argv[1][i])
			{
				letter = argv[1][i] - 65;
				while (letter >= 0)
				{
					write(1, &argv[1][i], 1);
					letter--;
				}
			}
			else if (argv[1][i] >= 'a' && 'z' >= argv[1][i])
			{
				letter = argv[1][i] - 97;
				while (letter >= 0)
				{
					write(1, &argv[1][i], 1);
					letter--;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
