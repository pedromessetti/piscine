/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 22:54:49 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/16 15:03:49 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i])
	{
		while (str[i] >= 48 && str[i] <= 57)
		{
			result *= 10;
			result += str[i] - 48;
			i++;
		}
		i++;
	}
	return (sign * result);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char s1[] = " \n \t \r \v +++ -     -      1                 234567asd";
	char s2[] = "2147483648asd";
	char s3[] = " \n \t\f\r \v -+++---++123-4b67asd";
	char s4[] = " \n \t\f\r \v ---1234b67asd";

	printf("%d \n", ft_atoi(s1));
	printf("%d \n", ft_atoi(s2));
	printf("%d \n", ft_atoi(s3));
	printf("%d \n", ft_atoi(s4));
	return (0);
}