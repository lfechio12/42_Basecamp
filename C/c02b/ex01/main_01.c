/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:24:43 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/02 22:28:25 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char teste[100];
	char destino[100];

	printf("O valor do teste é %s", ft_strncpy(teste, "Hello", 6));
	printf("\n");
	printf("O valor do destino é %s", ft_strncpy(destino, teste, 13));
	printf("\n");
}
