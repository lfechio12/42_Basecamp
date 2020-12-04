/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:53:01 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/02 17:53:14 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char str1[80] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
	char str2[80] = "";
	char to_find1[50] = "sum";
	char to_find2[50] = "abc";
	char to_find3[50] = "";

	printf("Funcao original:\n");
	printf("Frase: %s\n", str1);
	printf("Busca: %s\n", to_find1);
	printf("strstr: %s\n", strstr(str1, to_find1));
	printf("\n");
	printf("Funcao exercicio:\n");
	printf("Frase: %s\n", str1);
	printf("Busca: %s\n", to_find1);
	printf("strstr: %s\n", ft_strstr(str1, to_find1));
	printf("\n");
	printf("Funcao original:\n");
	printf("Frase: %s\n", str1);
	printf("Busca: %s\n", to_find2);
	printf("strstr: %s\n", strstr(str1, to_find2));
	printf("\n");
	printf("Funcao exercicio:\n");
	printf("Frase: %s\n", str1);
	printf("Busca: %s\n", to_find2);
	printf("strstr: %s\n", ft_strstr(str1, to_find2));
	printf("\n");
	printf("Funcao original:\n");
	printf("Frase: %s\n", str1);
	printf("Busca: %s\n", to_find3);
	printf("strstr: %s\n", strstr(str1, to_find3));
	printf("\n");
	printf("Funcao exercicio:\n");
	printf("Frase: %s\n", str1);
	printf("Busca: %s\n", to_find3);
	printf("strstr: %s\n", ft_strstr(str1, to_find3));
	printf("\n");
	printf("Funcao original:\n");
	printf("Frase: %s\n", str2);
	printf("Busca: %s\n", to_find2);
	printf("strstr: %s\n", strstr(str2, to_find2));
	printf("\n");
	printf("Funcao exercicio:\n");
	printf("Frase: %s\n", str2);
	printf("Busca: %s\n", to_find2);
	printf("strstr: %s\n", ft_strstr(str2, to_find2));
}