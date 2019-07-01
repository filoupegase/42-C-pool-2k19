/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cloison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 09:22:57 by cloison           #+#    #+#             */
/*   Updated: 2019/06/24 13:30:19 by cloison          ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int lcd;

	lcd = ft_strlen(dest);
	i = 0;
	while (src[i] && i < n)
	{
		dest[lcd] = src[i];
		i++;
		lcd++;
	}
	dest[lcd] = '\0';
	return (dest);
}
