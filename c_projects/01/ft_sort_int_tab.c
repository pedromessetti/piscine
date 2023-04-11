/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:11:01 by pmessett          #+#    #+#             */
/*   Updated: 2023/01/30 13:57:34 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index_a;
	int	index_b;
	int	swap;

	index_a = 0;
	while (index_a != size - 1)
	{
		index_b = index_a + 1;
		while (index_b != size)
		{
			if (tab[index_a] > tab[index_b])
			{
				swap = tab[index_a];
				tab[index_a] = tab[index_b];
				tab[index_b] = swap;
			}
			index_b++;
		}
		index_a++;
	}
}
