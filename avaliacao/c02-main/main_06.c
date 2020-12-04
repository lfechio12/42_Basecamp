/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_06.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:26:08 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/02 13:26:21 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	char raity[] = "012asd";
	char urong[] = "\na\n";

	printf("o valor de raity deve ser 1 e é %d", ft_str_is_printable(raity));
	printf("\n");
	printf("o valor de urong deve ser 0 e é %d", ft_str_is_printable(urong));
	printf("\n");
	return (0);
}