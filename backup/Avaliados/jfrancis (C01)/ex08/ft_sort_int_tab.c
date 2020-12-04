/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:09:50 by jfrancis          #+#    #+#             */
/*   Updated: 2020/12/02 19:15:07 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int index;
	int comparer;
	int swap;

	comparer = 0;
	while (comparer < size - 1)
	{
		index = 0;
		while (index < size - 1)
		{
			if (tab[index + 1] < tab[index])
			{
				swap = tab[index];
				tab[index] = tab[index + 1];
				tab[index + 1] = swap;
			}
			index++;
		}
		comparer++;
	}
}
