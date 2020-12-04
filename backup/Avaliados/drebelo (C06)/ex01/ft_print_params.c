/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drebelo <drebelo@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 01:13:53 by drebelo           #+#    #+#             */
/*   Updated: 2020/12/04 17:57:39 by drebelo          ###   ########.fr       */
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
	unsigned int i;
	unsigned int j;

	i = 1;
	j = argc;
	{
		while (j > 1)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i++;
			j--;
		}
	}
}
