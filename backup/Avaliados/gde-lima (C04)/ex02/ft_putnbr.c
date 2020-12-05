/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-lima <gde-lima@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 22:21:18 by gde-lima          #+#    #+#             */
/*   Updated: 2020/12/04 22:21:20 by gde-lima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_number(long int number, int count, int nb);

void	ft_putnbr(int nb)
{
	long	int	number;
	int			count;

	number = nb;
	count = 1;
	if (nb < 0)
	{
		number = -number;
		ft_putchar('-');
	}
	while (number > 9)
	{
		number = number / 10;
		count = count * 10;
	}
	ft_print_number(number, count, nb);
}

void	ft_print_number(long int number, int count, int nb)
{
	while (count > 0)
	{
		if (nb < 0)
		{
			number = nb;
			number = -number;
		}
		else
			number = nb;
		number = number / count % 10;
		ft_putchar(number + 48);
		count = count / 10;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
