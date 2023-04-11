/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:35:51 by pmessett          #+#    #+#             */
/*   Updated: 2023/02/02 11:58:17 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alphanumeric(char c)
{
	if ((c > 'z') || (c < 'a' && c > 'Z') || (c < 'A' && c > '9') || (c < '0'))
		return (0);
	return (1);
}

int	ft_char_is_numeric(char c)
{
	if (c > '9' || c < '0')
		return (0);
	return (1);
}

int	ft_char_is_lowercase(char c)
{
	if (c <= 'z' || c >= 'a')
		return (1);
	return (0);
}

char	ft_char_to_lowcase(char c)
{
	if ((c > 'z') || (c < 'a' && c > 'Z') || (c < 'A'))
		return (c);
	if (c <= 'Z' && c >= 'A')
		c = c + 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_char_to_lowcase(str[i]);
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (ft_char_is_alphanumeric(str[i]))
		{
			while (ft_char_is_numeric(str[i]))
				i++;
			if (!ft_char_is_alphanumeric(str[i - 1]))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
