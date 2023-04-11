/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 09:43:52 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/14 17:27:23 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	main(int argc, char *argv[])
{
	int	i_a;
	int	i_b;
	int	temp;

	i_a = 1;
	while (i_a < argc)
	{
		i_b = i_a;
		temp = i_a;
		while (i_b < argc)
		{
			if (ft_strcmp(argv[temp], argv[i_b]) > 0)
				temp = i_b;
			i_b++;
		}
		ft_swap(&argv[i_a], &argv[temp]);
		i_a++;
	}
	i_a = 1;
	while (i_a < argc)
	{
		ft_putstr(argv[i_a]);
		i_a++;
	}
	return (0);
}
