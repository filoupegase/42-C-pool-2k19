/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cloison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 10:05:33 by cloison           #+#    #+#             */
/*   Updated: 2019/06/10 15:20:02 by cloison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int first, int second)
{
	char a;
	char b;
	char c;
	char d;

	a = '0' + first / 10;
	b = '0' + first % 10;
	c = '0' + second / 10;
	d = '0' + second % 10;
	if (first < second)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (!(first == 98 && second == 99))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	int first;
	int second;

	first = 00;
	second = 00;
	while (first <= 99)
	{
		while (second <= 99)
		{
			ft_putchar(first, second);
			second++;
		}
		second = 00;
		first++;
	}
}
