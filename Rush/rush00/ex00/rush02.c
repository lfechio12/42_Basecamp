/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfurlan- <lfurlan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 19:30:17 by lfurlan-          #+#    #+#             */
/*   Updated: 2020/11/22 22:09:06 by lfurlan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	if (x > 0)
	{
		i = 1;
		while (i <= y)
		{
			j = 1;
			while (j <= x)
			{
				if (i == 1 && (j == 1 || j == x))
					ft_putchar('A');
				else if (i == y && (j == 1 || j == x))
					ft_putchar('C');
				else if (j != 1 && j != x && i != 1 && i != y)
					ft_putchar(' ');
				else
					ft_putchar('B');
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
