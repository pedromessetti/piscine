/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 22:19:39 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/13 18:47:08 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_increment(int n, int *arr) 
{
	int	i;
	int	max;

	i = n - 1; 
	max = 9;
	while (arr[i] == max) 
	{
		i--;
		max--;
	}
	arr[i]++; 
	while (i < n) 
	{
		arr[i+1] = arr[i] + 1; 
		i++;
	}
}

void	ft_output(int n, int *arr, int comma)
{
	int	i;

	i = 0;
	if (comma)
		write(1, ", ", 2);
	while (i < n)
		ft_putchar(arr[i++] + 48);
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	if (n <= 0 || n >= 10)
		return ;
	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	ft_output(n, arr, 0);
	while (arr[0] != 10 - n)
	{
		ft_increment(n, arr);
		ft_output(n, arr, 1);
	}
}

int main(void)
{
	ft_print_combn(3);
}