/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:05:11 by pmessett          #+#    #+#             */
/*   Updated: 2023/01/30 12:00:16 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	temp;
	int	rev;

	index = 0;
	rev = size - 1;
	while (index != size / 2)
	{
		temp = tab[index];
		tab[index] = tab[rev];
		tab[rev] = temp;
		rev--;
		index++;
	}
}
