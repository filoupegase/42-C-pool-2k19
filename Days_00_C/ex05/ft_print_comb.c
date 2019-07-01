/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cloison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 15:30:03 by cloison           #+#    #+#             */
/*   Updated: 2019/06/10 17:50:22 by cloison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char d, char u)
{
	if (c != d && d != u && u != c)
	{
		if (u > d && d > c)
		{
			write(1, &c, 1);
			write(1, &d, 1);
			write(1, &u, 1);
			if (!(c == '7' && d == '8' && u == '9'))
			{
				write(1, ", ", 2);
			}
		}
	}
}

void	ft_print_comb(void)
{
	char u;
	char d;
	char c;

	u = '0';
	d = '0';
	c = '0';
	while (c <= '7')
	{
		while (d <= '8')
		{
			while (u <= '9')
			{
				ft_putchar(c, d, u);
				u++;
			}
			u = '0';
			d++;
		}
		d = '0';
		c++;
	}
}
