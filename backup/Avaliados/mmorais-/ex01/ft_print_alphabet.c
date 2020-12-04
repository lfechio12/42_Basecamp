/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais- <mmorais-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 22:38:21 by mmorais-          #+#    #+#             */
/*   Updated: 2020/12/02 17:39:56 by mmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	print;
	int		counter;

	print = 'a';
	counter = 0;
	while (counter < 26)
	{
		write(1, &print, 1);
		print++;
		counter++;
	}
}
