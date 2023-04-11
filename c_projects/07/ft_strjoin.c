/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:22:00 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/14 13:39:24 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_total_len(int size, char **strs, int sep_len)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		total_len += sep_len;
		i++;
	}
	total_len -= sep_len;
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		total_len;

	total_len = ft_total_len(size, strs, ft_strlen(sep));
	if (size == 0)
		return ((char *)malloc(1));
	str = (char *)malloc(total_len + 1);
	if (!str)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(str, strs[i]);
		str += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(str, sep);
			str += ft_strlen(sep);
		}
		i++;
	}
	str[i] = '\0';
	return (str -= total_len);
}

/*int	main(void)
{
	int offset;
	char **strs;
	char *res_str;

	strs = malloc(3 * sizeof(char *));
	if (strs == NULL)
		return (1);
	offset = 0;
	while (offset < 3)
	{
		strs[offset] = "pedrin";
		offset++;
	}
	res_str = ft_strjoin(3, strs, ", ");
	if (res_str == NULL)
		return (1);
	printf("res: %s\n", res_str);
	free(strs);
	free(res_str);
	return (0);
}*/