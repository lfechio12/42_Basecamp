/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:30:56 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/02 13:31:06 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_is_negative(int n);

int main(void)
{
	int i;
	int j;
	int k;

	i = -10;
	j = 10;
	k = 0;

	ft_is_negative(i);
	ft_is_negative(j);
	ft_is_negative(k);
}