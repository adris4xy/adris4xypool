/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:48:39 by aortega-          #+#    #+#             */
/*   Updated: 2019/10/16 13:42:35 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	dec_to_hex(int n)
{
	int	result;
	int	rest;
	int	simbol;
	int	simbolresult;

	result = n / 16;
	rest = n % 16;
	simbolresult = result + ((result < 10) ? 48 : 87);
	simbol = rest + ((rest < 10) ? 48 : 87);
	write(1, &simbolresult, 1);
	write(1, &simbol, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	temp;

	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			write(1, "\\", 1);
			temp = *str;
			dec_to_hex(temp);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
