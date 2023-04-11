/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 13:36:49 by astein            #+#    #+#             */
/*   Updated: 2023/01/29 20:33:21 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush_0x(int rush_nr, int x, int y);
void	ft_put_string(char *s);
int		ft_arr2int(char *arr);

int	main(int argc, char *argv[])
{
	int	rush_nr;
	int	x;
	int	y;

	if (argc == 4)
	{
		rush_nr = ft_arr2int(argv[1]);
		x = ft_arr2int(argv[2]);
		y = ft_arr2int(argv[3]);
		if (rush_nr < 0 || rush_nr > 4)
		{
			ft_put_string("exercise number must be between 0 and 4!\n");
			return (1);
		}
		rush_0x(rush_nr, x, y);
	}
	else
	{
		ft_put_string("\nto few arguments!\n\n");
		ft_put_string("1. arg = rush0x   e.g. 3   -> rush03\n");
		ft_put_string("2. arg = no of columns (x)\n");
		ft_put_string("3. arg = no of rows (y)\n\n");
	}
	return (0);
}
