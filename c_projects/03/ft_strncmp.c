/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:14:30 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/05 21:14:09 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && (i < n) && (s1[i] == s2[i]))
		i++;
	if (i == n || n == 0)
		return (0);
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	s1[];
	char	s2[];

  s1[] = "abCd";
  s2[] = "abcd";
  printf("%d", ft_strncmp(s1, s2,3));
}*/