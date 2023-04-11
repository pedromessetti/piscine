/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 23:56:48 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/15 23:18:16 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_base_is_possible(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
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

void	ft_converter(long int n, int baselen, char *base)// 2, 3, abc
{
	if (n / baselen == 0)
		ft_putchar(base[n % baselen]);
	else
	{
		ft_converter(n / baselen, baselen, base);
		ft_putchar(base[n % baselen]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;
	int			baselen;

	n = nbr;
	baselen = 0;
	while (base[baselen])
	{
		if (base[baselen] == '+' || base[baselen] == '-')
			return ;
		baselen++;
	}
	if (baselen <= 1)
		return ;
	if (ft_base_is_possible(base))
		return ;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	ft_converter(n, baselen, base);
}

int	main(void)
{
	ft_putnbr_base(9, "abc");
	write(1, "\n", 1);
	ft_putnbr_base(-32, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(29092, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(-29092, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-29092, "0");
	ft_putnbr_base(-29092, "12-3");
	ft_putnbr_base(-29092, "+12+-+3");
	ft_putnbr_base(-29092, "111");
	return (0);
}
