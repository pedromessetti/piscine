/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:36:47 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/16 15:48:24 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	arr = malloc(((max - min) + 1) * sizeof(int));
	if (min >= max)
		arr = NULL;
	while (min < max)
		arr[i++] = min++;
	return (arr);
}

int	main(void)
{
	int	i;
	int	*arrint;

	arrint = ft_range(20, 42);
	if (arrint != NULL)
	{
		for (i = 0; arrint[i] != '\0'; i++)
			printf("%i ", arrint[i]);
	}
}