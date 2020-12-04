/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais- <mmorais-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:13:30 by mmorais-          #+#    #+#             */
/*   Updated: 2020/12/02 21:07:51 by mmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int a, int b, int c);

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				if (a < b && b < c)
				{
					print_number(a, b, c);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	print_number(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a == '7' && b == '8' && c == '9')
	{
		return ;
	}
	else
	{
		write(1, ", ", 1);
		write(1, " ", 1);
	}
}
