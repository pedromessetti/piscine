/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:40:22 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/13 10:35:41 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_nonprintable(char c)
{
	if (c > 31 && c < 127)
		return (0);
	return (1);
}

char	ft_convert_char_to_hex(char c)
{
	if (c < 10)
		c = '0' + c;
	else
		c = 'a' + (c - 10);
	return (c);
}

void	ft_putstr_non_printable(char *str)
{
	char	c1;
	char	c2;
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_nonprintable(str[i]))
		{
			c1 = ft_convert_char_to_hex(str[i] / 16);
			c2 = ft_convert_char_to_hex(str[i] % 16);
			write(1, "\\", 1);
			write(1, &c1, 1);
			write(1, &c2, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
