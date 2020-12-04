/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 20:53:57 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/02 00:01:04 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int a;
	int *prt1;
	int **prt2;
	int ***prt3;
	int ****prt4;
	int *****prt5;
	int ******prt6;
	int *******prt7;
	int ********prt8;
	int *********prt9;

	a = 0;
	prt1 = &a;
	prt2 = &prt1;
	prt3 = &prt2;
	prt4 = &prt3;
	prt5 = &prt4;
	prt6 = &prt5;
	prt7 = &prt6;
	prt8 = &prt7;
	prt9 = &prt8;
	ft_ultimate_ft(prt9);
	printf("%d\n", a);
	return (0);
}
