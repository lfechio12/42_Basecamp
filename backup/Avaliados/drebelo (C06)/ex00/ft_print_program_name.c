/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drebelo <drebelo@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 01:06:07 by drebelo           #+#    #+#             */
/*   Updated: 2020/12/04 17:55:29 by drebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		write(1, &str[counter], 1);
		counter++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc != 0)
		ft_putstr(argv[0]);
	write(1, "\n", 1);
}
