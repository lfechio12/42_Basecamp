/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:52:04 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/02 17:52:14 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char s1[6] = "texto";
	char s2[6] = "texto";
	char s3[6] = "taxto";
	char s4[6] = "tzxto";
	char s5[6] = "text";
	char s6[6] = "";

	printf("Funcao original:\n");
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s3));
	printf("%d\n", strcmp(s1, s4));
	printf("%d\n", strcmp(s1, s5));
	printf("%d\n", strcmp(s5, s1));
	printf("%d\n", strcmp(s1, s6));
	printf("%d\n", strcmp(s6, s1));
	printf("\n");
	printf("Funcao exercicio:\n");
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s1, s3));
	printf("%d\n", ft_strcmp(s1, s4));
	printf("%d\n", ft_strcmp(s1, s5));
	printf("%d\n", ft_strcmp(s5, s1));
	printf("%d\n", ft_strcmp(s1, s6));
	printf("%d\n", ft_strcmp(s6, s1));
	return (0);
}