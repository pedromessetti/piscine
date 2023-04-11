/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:18:14 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/13 16:40:10 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i_src;
	int	i_dest;

	i_src = 0;
	i_dest = 0;
	while (dest[i_dest])
	{
		i_dest++;
	}
	while (src[i_src])
	{
		dest[i_dest] = src[i_src];
		i_dest++;
		i_src++;
	}
	dest[i_dest] = '\0';
	return (dest);
}

int	main(void)
{
	char src[] = " 150BPM";
	char dest[100] = "Ritmada ";
	printf("Antes: %s\n", dest);

	ft_strcat(dest, src);

	printf("Depois: %s\n", dest);
}