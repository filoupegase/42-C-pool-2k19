/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cloison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 15:04:12 by cloison           #+#    #+#             */
/*   Updated: 2019/06/21 14:42:36 by cloison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int lcd;

	lcd = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[lcd] = src[i];
		i++;
		lcd++;
	}
	dest[lcd] = '\0';
	return (dest);
}
