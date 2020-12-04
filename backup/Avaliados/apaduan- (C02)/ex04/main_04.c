/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:25:32 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/02 16:49:00 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char letter_lower[] = "abcde";
	char letter_upper[] = "ABCDE";
	char letter_lower_upper[] = "aBcDe";
	char letter_lower_number[] = "abcde123456";
	char letter_lower_space[] = "ab cde";
	
	printf("letter lower, deve retornar 1 e retorna %d", ft_str_is_lowercase(letter_lower));
	printf("\n");
	printf("letter upper, deve retornar 0 e retorna %d", ft_str_is_lowercase(letter_upper));
	printf("\n");
	printf("letter lower upper, deve retornar 0 e retorna %d", ft_str_is_lowercase(letter_lower_upper));
	printf("\n");
	printf("letter lower number, deve retornar 0 e retorna %d", ft_str_is_lowercase(letter_lower_number));
	printf("\n");
	printf("letter lower space, deve retornar 0 e retorna %d", ft_str_is_lowercase(letter_lower_space));
	printf("\n");
}