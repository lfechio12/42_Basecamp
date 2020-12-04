/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:24:16 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/02 13:24:35 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char teste[] = "abbbbddd";
	char destino[100];

	printf("O valor do teste é %s", teste);
	printf("\n");
	printf("O valor do destino é %s", ft_strcpy(destino, teste));
	printf("\n");
}
