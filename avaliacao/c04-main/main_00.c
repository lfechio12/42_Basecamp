/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_06.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:36:45 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/02 13:36:54 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	char texto[] = "LES AUUAUAUHUAHHAUHDUHSA AUSHDIUASDHUI";
	int teste;

	teste = ft_strlen(texto);
	printf("o valor é %d", teste);
	printf("\n");
	return (0);
}