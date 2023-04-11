/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:09:37 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/07 23:02:19 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	j;

	j = 0;
	if (argc == 1)
	{
		while (argv[0][j])
		{
			ft_putchar(argv[0][j]);
			j++;
		}
		ft_putchar('\n');
	}
	return (0);
}
