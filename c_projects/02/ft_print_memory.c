/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:15:13 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/14 15:17:43 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#define BASE "0123456789abcdef"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_non_printable(char c)
{
	if (c < 32)
		return (1);
	return (0);
}

char	ft_char_to_hex(char c)
{
	if (c < 10)
		c = '0' + c;
	else
		c = 'a' + (c - 10);
	return (c);
}

void ft_print_addr(long addr, int line_len)
{
	if (addr < 16)
	{
		while (line_len > 0)
		{
			ft_putchar('0');
			line_len--;
		}
		ft_putchar(BASE[addr]);
		return ;
	}
	ft_print_addr(addr / 16, line_len - 1);
	ft_putchar(BASE[addr % 16]);
}

void	ft_print_line(char *str)
{
	int i = 0;
	char c1;
	char c2;
	ft_print_addr((long)str[0], 16);
	ft_putchar(':');
	while (str[i])
	{
		c1 = ft_char_to_hex(str[i] / 16);
		c2 = ft_char_to_hex(str[i] % 16);
		ft_putchar(c1);
		ft_putchar(c2);
		if ((i % 2))
			ft_putchar(' ');
		i++;
	}
	ft_putchar(' ');
	i=0;
	while (str[i])
	{
		if (is_non_printable(str[i]))
			ft_putchar('.');
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	if (size == 0)
		return (0);
	int i = 0;
	int j = 0;
	char current_line[17];
	char *str = addr;
	while (str[i])
	{
		current_line[j] = str[i];
		if (!(i % 16) && (i != 0))
		{
			current_line[j] = '\0';
			ft_print_line(current_line);
			j = 0;
			current_line[j] = str[i];
		}
		i++;
		j++;
	}
	
	return (addr);
}

int	main(void)
{
	char *str = "Bonjour les aminches\n\b\rc  est fou\ntout\rce qu on peut faire avec\r\r\nprint_memory\n\n\r\blol\rlol\r \b";

	ft_print_memory(str, strlen(str));
	return (0);
}
