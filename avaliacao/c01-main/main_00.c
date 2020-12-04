/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:35:14 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/02 13:35:22 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_ft(int *nbr);

int	main(void)
{
	int a;
	
	a=12;
	ft_ft(&a);
	printf("O valor do pointer é %d", a);
	printf("\n");

	return (0);
}