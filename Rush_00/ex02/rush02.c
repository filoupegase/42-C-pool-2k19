/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 10:44:49 by hprudhom          #+#    #+#             */
/*   Updated: 2019/06/09 15:10:07 by hprudhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	top(int l, int count)
{
	if (count == 0 || count == l - 1)
	{
		ft_putchar('A');
	}
	else
	{
		ft_putchar('B');
	}
}

void	mid(int l, int h)
{
	char countl;
	char counth;

	countl = 0;
	counth = 0;
	h = h - 2;
	while (counth < h)
	{
		while (countl < l)
		{
			if (countl == 0 || countl == l - 1)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			countl++;
		}
		ft_putchar('\n');
		counth++;
		countl = 0;
	}
}

void	bot(int l)
{
	char count;

	count = 0;
	while (count < l)
	{
		if (count == 0 || count == l - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		count++;
	}
	ft_putchar('\n');
}

void	rush(int l, int h)
{
	char count;

	if (l > 0 && h > 0)
	{
		count = 0;
		while (count < l)
		{
			top(l, count);
			count++;
		}
		ft_putchar('\n');
		mid(l, h);
		if (h > 1)
		{
			bot(l);
		}
	}
}
