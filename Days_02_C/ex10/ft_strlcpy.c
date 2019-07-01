/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cloison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 11:34:46 by cloison           #+#    #+#             */
/*   Updated: 2019/06/19 15:04:12 by cloison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(const char *str)
{
	unsigned int	size;

	size = 0;
	while (str[size])
	{
		size++;
	}
	return (size);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(src);
	while (size > 1 && *src)
	{
		*dest++ = *src++;
		size--;
	}
	if (size >= 1)
		*dest = '\0';
	return (len);
}
