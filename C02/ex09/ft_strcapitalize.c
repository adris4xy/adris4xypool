/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 11:39:53 by aortega-          #+#    #+#             */
/*   Updated: 2019/10/16 13:05:06 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_alphanumeric(char str)
{
	if ((str >= 'A' && str <= 'Z') ||
		(str >= 'a' && str <= 'z') ||
		(str >= '0' && str <= '9'))
		return (1);
	else
		return (0);
}

int		ft_small(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	else
		return (0);
}

int		ft_big(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int lon;

	lon = 0;
	if (ft_small(*str))
		*str = *str - 32;
	while (*str)
	{
		if (!ft_alphanumeric(*str) && ft_small(*(str + 1)))
			*(str + 1) = *(str + 1) - 32;
		if (ft_alphanumeric(*(str - 1)) && ft_big(*str))
			*str = *str + 32;
		str++;
		lon++;
	}
	str = str - lon;
	return (str);
}
