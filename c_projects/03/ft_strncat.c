/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:44:25 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/05 13:30:50 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i_src;
	unsigned int	i_dest;

	i_src = 0;
	i_dest = 0;
	while (dest[i_dest])
	{
		i_dest++;
	}
	while ((i_src < nb) && src[i_src])
	{
		dest[i_dest] = src[i_src];
		i_dest++;
		i_src++;
	}
	dest[i_dest] = '\0';
	return (dest);
}

/*int	main(void)
{
	char dest[50] = "Using strncat function,";
	char src[50] = " this part is added and this not";

	printf("Antes::: %s\n", dest);

	ft_strncat(dest, src, 50);

	printf("Depois::: %s\n", dest);
}*/