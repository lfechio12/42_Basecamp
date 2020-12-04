/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 22:12:10 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/02 00:38:30 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 104; //104/5 =20
	b = 5; //104/5 = 4
	ft_ultimate_div_mod(&a, &b); //chamando
	printf("O resultado da div (a) é %d", a);
	printf("\n");
	printf("O resultado do mod (b) é %d", b);
	printf("\n");
}
