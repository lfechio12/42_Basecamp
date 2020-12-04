/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais- <mmorais-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:51:10 by mmorais-          #+#    #+#             */
/*   Updated: 2020/12/02 17:40:26 by mmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	counter;

	counter = '0';
	while (counter <= '9')
	{
		write(1, &counter, 1);
		counter++;
	}
}
