/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_08.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:26:45 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/02 13:26:51 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char all_upper[] = "ABCDE";
	char upper_number[] = "aBC45de";

	printf("O valor da all_upper antes é %s", all_upper);
	printf("\n");
	printf("O valor da all_upper depois é %s", ft_strlowcase(all_upper));
	printf("\n----------------------------\n");
	printf("O valor da upper_number antes é %s", upper_number);
	printf("\n");
	printf("O valor da upper_number depois é %s", ft_strlowcase(upper_number));
	printf("\n----------------------------\n");
}
