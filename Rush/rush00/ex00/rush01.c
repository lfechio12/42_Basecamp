/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfurlan- <lfurlan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 19:30:17 by lfurlan-          #+#    #+#             */
/*   Updated: 2020/11/22 23:03:06 by lfurlan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	while (i <= y && x > 0)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && i != 1 && j == x && j != 1))
				ft_putchar('/');
			else if ((i == 1 && j == x) || (i == y && j == 1))
				ft_putchar('\\');
			else if (j != 1 && j != x && i != 1 && i != y)
				ft_putchar(' ');
			else
				ft_putchar('*');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
