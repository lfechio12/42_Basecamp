/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais- <mmorais-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 22:17:12 by mmorais-          #+#    #+#             */
/*   Updated: 2020/11/30 19:46:27 by mmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_letther(char x, char y);

void	ft_print_comb2(void)
{
	char x;
	char y;

	x = 0;
	while (x < 100)
	{
		y = x + 1;
		while (y < 100)
		{
			if (x < y)
			{
				print_letther(x, y);
				if (x / 10 != 9 || x % 10 != 8)
				{
					write(1, ", ", 1);
					write(1, " ", 1);
				}
			}
			y++;
		}
		x++;
	}
}

void	print_letther(char x, char y)
{
	ft_putchar(x / 10 + '0');
	ft_putchar(x % 10 + '0');
	ft_putchar(' ');
	ft_putchar(y / 10 + '0');
	ft_putchar(y % 10 + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
