/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:52:31 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/02 17:52:40 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

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

	printf("Funcao original:\n");
	printf("string1: %s, string2: %s\n", str1, str3);
	printf("String concatenada: %s\n", strcat(str1, str3));
	printf("\n");
	printf("Funcao exercicio:\n");
	printf("string1: %s, string2: %s\n", str2, str3);
	printf("String concatenada: %s\n", ft_strcat(str2, str3));
	printf("\n");
	printf("Funcao original:\n");
	printf("string1: %s, string2: %s\n", str4, str6);
	printf("String concatenada: %s\n", strcat(str4, str6));
	printf("\n");
	printf("Funcao exercicio:\n");
	printf("string1: %s, string2: %s\n", str5, str6);
	printf("String concatenada: %s\n", ft_strcat(str5, str6));	printf("\n");
	printf("Funcao original:\n");
	printf("string1: %s, string2: %s\n", str7, str9);
	printf("String concatenada: %s\n", strcat(str7, str9));
	printf("\n");
	printf("Funcao exercicio:\n");
	printf("string1: %s, string2: %s\n", str8, str9);
	printf("String concatenada: %s\n", ft_strcat(str8, str9));
	return (0);
}