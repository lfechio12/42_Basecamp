/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancis <jfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:28:37 by jfrancis          #+#    #+#             */
/*   Updated: 2020/12/02 17:41:10 by jfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	if (b == 0)
	{
		*a = 0;
		*b = 0;
		return ;
	}
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
