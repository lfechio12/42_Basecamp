/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 21:27:22 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/01 22:05:57 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int	div;
	int	mod;

	ft_div_mod(32, 5, &div, &mod);
	printf("O resultado da div (a) é %d", div);
	printf("\n");
	printf("O resultado do mod (b) é %d", mod);
	printf("\n");
}
