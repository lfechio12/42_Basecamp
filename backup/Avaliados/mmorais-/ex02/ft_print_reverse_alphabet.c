/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais- <mmorais-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:07:31 by mmorais-          #+#    #+#             */
/*   Updated: 2020/12/02 17:40:16 by mmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	counter;
	int print;

	counter = 0;
	print = 'z';
	while (counter < 26)
	{
		write(1, &print, 1);
		print--;
		counter++;
	}
}
