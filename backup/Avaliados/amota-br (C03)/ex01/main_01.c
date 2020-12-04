/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:52:18 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/02 17:52:27 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s1[6] = "texto";
	char s2[6] = "texta";
	char s3[6] = "texao";
	char s4[6] = "texzo";
	char s5[6] = "tex";
	char s6[6] = "";

	printf("Funcao original:\n");
	printf("%d\n", strncmp(s1, s2, 4));
	printf("%d\n", strncmp(s1, s3, 4));
	printf("%d\n", strncmp(s1, s4, 4));
	printf("%d\n", strncmp(s1, s4, 0));
	printf("%d\n", strncmp(s1, s5, 4));
	printf("%d\n", strncmp(s5, s1, 4));
	printf("%d\n", strncmp(s1, s6, 4));
	printf("%d\n", strncmp(s6, s1, 4));
	printf("\n");
	printf("Funcao exercicio:\n");
	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%d\n", ft_strncmp(s1, s3, 4));
	printf("%d\n", ft_strncmp(s1, s4, 4));
	printf("%d\n", ft_strncmp(s1, s4, 0));
	printf("%d\n", ft_strncmp(s1, s5, 4));
	printf("%d\n", ft_strncmp(s5, s1, 4));
	printf("%d\n", ft_strncmp(s1, s6, 4));
	printf("%d\n", ft_strncmp(s6, s1, 4));
	return (0);
}