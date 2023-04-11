/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:54:28 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/15 18:24:48 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_base_not_possible(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == 32 || (base[i] >= 9
				&& base[i] <= 13))
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_converter(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			break ;
		i++;
	}
	return (i);
}

int	ft_negative(char *str, int *sign, int i)
{
	while ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i++] == '-')
			*sign = -*sign;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	if (ft_base_not_possible(base) || ft_strlen(base) <= 1)
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	i = ft_negative(str, &sign, i);
	res = ft_converter(str[i], base);
	while (str[i++])
	{
		if (res == ft_strlen(base))
			break ;
		result = (ft_strlen(base) * result) + res;
		res = ft_converter(str[i], base);
	}
	return (sign * result);
}

/*int	main(void)
{
	printf("%i", ft_atoi_base("\n  \t --++---+cahgghf", "abc"));
}*/