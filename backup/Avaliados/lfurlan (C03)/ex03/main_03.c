/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:52:44 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/02 17:52:57 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char str1[50] = "Parte 1";
	char str2[50] = "Parte 1";
	char str3[50] = ", Parte 2";
	char str4[50] = "Parte 1";
	char str5[50] = "Parte 1";
	char str6[50] = "";
	char str7[50] = "";
	char str8[50] = "";
	char str9[50] = ", Parte 2";
	char str10[50] = "Parte 1";
	char str11[50] = "Parte 1";
	char str12[50] = ", Parte 2";

	printf("Funcao original:\n");
	printf("string1: %s, string2: %s, n: %d\n", str1, str3, 5);
	printf("String concatenada: %s\n", strncat(str1, str3, 5));
	printf("\n");
	printf("Funcao exercicio:\n");
	printf("string1: %s, string2: %s, n: %d\n", str2, str3, 5);
	printf("String concatenada: %s\n", ft_strncat(str2, str3, 5));
	printf("\n");
	printf("Funcao original:\n");
	printf("string1: %s, string2: %s, n: %d\n", str4, str6, 5);
	printf("String concatenada: %s\n", strncat(str4, str6, 5));
	printf("\n");
	printf("Funcao exercicio:\n");
	printf("string1: %s, string2: %s, n: %d\n", str5, str6, 5);
	printf("String concatenada: %s\n", ft_strncat(str5, str6, 5));
	printf("\n");
	printf("Funcao original:\n");
	printf("string1: %s, string2: %s, n: %d\n", str7, str9, 5);
	printf("String concatenada: %s\n", strncat(str7, str9, 5));
	printf("\n");
	printf("Funcao exercicio:\n");
	printf("string1: %s, string2: %s, n: %d\n", str8, str9, 5);
	printf("String concatenada: %s\n", ft_strncat(str8, str9, 5));
	printf("\n");
	printf("Funcao original:\n");
	printf("string1: %s, string2: %s, n: %d\n", str10, str12, 20);
	printf("String concatenada: %s\n", strncat(str10, str12, 20));
	printf("\n");
	printf("Funcao exercicio:\n");
	printf("string1: %s, string2: %s, n: %d\n", str11, str12, 20);
	printf("String concatenada: %s\n", ft_strncat(str11, str12, 20));
	return (0);
}