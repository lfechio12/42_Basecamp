/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:32:55 by jfrancis          #+#    #+#             */
/*   Updated: 2020/12/02 18:47:17 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int count;
	int swap;

	count = 0;
	while (count < (size / 2))
	{
		swap = tab[count];
		tab[count] = tab[size - count - 1];
		tab[size - count - 1] = swap;
		count++;
	}
}
