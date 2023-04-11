/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:39:10 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/15 18:37:02 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = (max - min);
	i = 0;
	*range = (int *)malloc(((max - min) + 1) * sizeof(int **));
	if (!*range)
		return (-1);
	while (min < max)
		(*range)[i++] = min++;
	return (size);
}

/*int	main(void)
{
	int	i;
	int	*arrint;

	arrint = ft_ultimate_range(arrint, 1, 9);
	for (i = 0; arrint[i] != '\0'; i++)
		printf("%i", arrint[i]);
}*/
