/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drebelo <drebelo@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 01:54:22 by drebelo           #+#    #+#             */
/*   Updated: 2020/12/04 20:14:55 by drebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return ((s2[i] - s1[i]) * -1);
		i++;
	}
	return (0);
}

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

void	ft_sort_str_tab(char *tab[], int size)
{
	int		i;
	char	*buffer;
	int		j;

	buffer = 0;
	j = -1;
	while (j != 0)
	{
		i = 1;
		j = 0;
		while (i < size - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				buffer = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = buffer;
				j++;
			}
			i++;
		}
	}
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc == 1)
		return (0);
	ft_sort_str_tab(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
