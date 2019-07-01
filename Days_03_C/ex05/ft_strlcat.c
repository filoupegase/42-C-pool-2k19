/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cloison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 13:39:32 by cloison           #+#    #+#             */
/*   Updated: 2019/06/24 15:25:16 by cloison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int c;
	unsigned int s;

	i = 0;
	while (dest[i] != '\0')
		i++;
	c = 0;
	while (src[i] != '\0' && c < size)
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[i + c] = '\0';
	s = 0;
	while (src[s] != '\0')
		s++;
	return (s + size);
}
