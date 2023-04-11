/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:01:49 by astein            #+#    #+#             */
/*   Updated: 2023/02/05 14:11:00 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put_string(char *s)

{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i++]);
	}
}

void	ft_print_line(char symbol_1, char symbol_2, char symbol_3, int columns)
{
	int	current_column;

	current_column = 0;
	while (++current_column <= columns)
	{
		if (current_column == 1)
			ft_putchar(symbol_1);
		else if (current_column == columns)
			ft_putchar(symbol_3);
		else
			ft_putchar(symbol_2);
	}
	if (columns > 0)
		ft_putchar('\n');
}

int	ft_arr2int(char *arr)
{
	int	i;
	int	result;

	i = -1;
	result = 0;
	while (arr[++i] != '\0')
	{
		if (arr[i] < '0' || arr[i] > '9')
		{
			ft_put_string("input is no positive number!\n");
			return (-1);
		}
		result = result * 10;
		result = result + (arr[i] - '0');
	}
	return (result);
}

void	rush_0x(int rush_nr, int x, int y)
{
	int		current_line;
	char	*sym;

	if (rush_nr == 0)
		sym = "o-o| o-o";
	else if (rush_nr == 1)
		sym = "/*\\* \\*/";
	else if (rush_nr == 2)
		sym = "ABAB CBC";
	else if (rush_nr == 3)
		sym = "ABCB ABC";
	else if (rush_nr == 4)
		sym = "ABCB CBA";
	current_line = 0;
	while (++current_line <= y)
	{
		if (current_line == 1)
			ft_print_line(sym[0], sym[1], sym[2], x);
		else if (current_line == y)
			ft_print_line(sym[5], sym[6], sym[7], x);
		else
			ft_print_line(sym[3], sym[4], sym[3], x);
	}
}
