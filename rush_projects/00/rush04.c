/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:52:53 by pmessett          #+#    #+#             */
/*   Updated: 2023/01/29 14:55:03 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_row(char c1, char c2, char c3, int columns)
{
	int	current_column;

	current_column = 0;
	while (++current_column <= columns)
	{
		if (current_column == 1)
			ft_putchar(c1);
		else if (current_column == columns)
			ft_putchar(c3);
		else
			ft_putchar(c2);
	}
	if (columns > 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	current_row;

	current_row = 0;
	while (++current_row <= y)
	{
		if (current_row == 1)
			ft_print_row('A', 'B', 'C', x);
		else if (current_row == y)
			ft_print_row('C', 'B', 'A', x);
		else
			ft_print_row('B', ' ', 'B', x);
	}
}
