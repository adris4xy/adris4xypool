/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:53:37 by aortega-          #+#    #+#             */
/*   Updated: 2019/10/18 09:45:42 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int d;

	d = 0;
	while (str[d] != '\0')
	{
		d++;
	}
	return (d);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int count;
	unsigned int i;

	count = ft_strlen(src);
	i = 0;
	if (size == 0)
		dest[0] = '\0';
	else
	{
		while ((i < size - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}
