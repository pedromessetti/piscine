/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 21:16:41 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/08 21:37:43 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i_src;
	unsigned int	i_dest;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i_src = 0;
	i_dest = dest_len;
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src[i_src] && (i_src < (size - dest_len - 1)))
		dest[i_dest++] = src[i_src++];
	dest[i_dest] = '\0';
	return (src_len + dest_len);
}

/*int	main(void)
{
	char dest[18] = "Hello";
	char src[7] = "World";

	printf("%i\n", ft_strlcat(dest, src, 11));
	printf("%s\n", dest);

	return (0);
}*/