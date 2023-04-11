/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:02:33 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/07 16:03:26 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	count;
	int	result;

	count = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else
		result = nb;
	while (count < nb)
	{
		result = result * count;
		count++;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	int n;
	int res;

	n = -5;
	while (n <= 10)
	{
		res = ft_iterative_factorial(n);
		printf("n = %d, n! = %d\n", n, res);
		n++;
	}
	return (0);
}*/