/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 13:36:43 by astein            #+#    #+#             */
/*   Updated: 2023/01/29 20:22:48 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(char c1, char c2, char c3, int columns)
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
	int	current_line;

	current_line = 0;
	while (++current_line <= y)
	{
		if (current_line == 1)
			ft_print_line('/', '*', '\\', x);
		else if (current_line == y)
			ft_print_line('\\', '*', '/', x);
		else
			ft_print_line('*', ' ', '*', x);
	}
}
