/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 23:55:53 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/01 23:58:08 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ft(int *nbr);

int	main(void)
{
	int a;
	
	a = 12;
	ft_ft(&a);
	printf("O valor do pointer é %d", a);
	printf("\n");
	return (0);
}
