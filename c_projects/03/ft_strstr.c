/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:44:58 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/13 16:39:20 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i_src;
	int	i_target;

	i_src = 0;
	while (!*to_find)
		return (str);
	while (str[i_src])
	{
		i_target = 0;
		while (str[i_src + i_target] == to_find[i_target])
		{
			if (to_find[i_target + 1] == '\0')
				return (str + i_src);
			i_target++;
		}
		i_src++;
	}
	return (0);
}

int main(void)
{
  char str[] = "Use your brain and heart";
  char target[] = "brain";
  char *p = ft_strstr(str, target);

  if (p)
    printf("%s esta presente em %s", target, str);
  else
    printf("%s nao esta presente em %s", target, str);
}