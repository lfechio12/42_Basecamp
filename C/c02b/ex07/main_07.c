/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_07.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:26:31 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/02 13:26:33 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char all_lower[] = "abcde";
	char lower_number[] = "abc45de";

	printf("O valor da all_lower antes é %s", all_lower);
	printf("\n");
	printf("O valor da all_lower depois é %s", ft_strupcase(all_lower));
	printf("\n----------------------------\n");
	printf("O valor da lower_number antes é %s", lower_number);
	printf("\n");
	printf("O valor da lower_number depois é %s", ft_strupcase(lower_number));
	printf("\n----------------------------\n");
}