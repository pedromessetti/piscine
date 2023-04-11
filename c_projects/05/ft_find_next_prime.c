/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:39:30 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/12 04:23:45 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	is_prime;
	int	n;

	is_prime = ft_is_prime(nb);
	if (is_prime)
		return (nb);
	n = nb + 1;
	while (!ft_is_prime(n))
		n++;
	return (n);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_find_next_prime(9));
	return (0);
}*/