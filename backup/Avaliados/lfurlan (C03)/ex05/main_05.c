/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_05.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:53:17 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/02 17:53:29 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(char *str);

int				main(void)
{
	char			str1[50] = "Parte 1";
	char			str2[50] = "Parte 1";
	char			str3[50] = "Parte 1";
	char			str4[50] = "Parte 1";
	char			str5[50] = ", Parte 2";
	char			str6[50] = "Parte 1";
	char			str7[50] = "";
	char			str8[50] = "";
	unsigned int	total_size;
	
	printf("Funcao original:\n");
	total_size = strlcat(str1, str5, 20);
	printf("String concatenada: %s\n", str1);
	printf("Tamanho final: %d\n", ft_strlen(str1));
	printf("Tamanho real: %d\n", total_size);
	printf("\n");
	printf("Funcao exercicio:\n");
	total_size = ft_strlcat(str2, str5, 20);
	printf("String concatenada: %s\n", str2);
	printf("Tamanho final: %d\n", ft_strlen(str2));
	printf("Tamanho real: %d\n", total_size);
	printf("\n");
	printf("Funcao original:\n");
	total_size = strlcat(str3, str5, 5);
	printf("String concatenada: %s\n", str3);
	printf("Tamanho final: %d\n", ft_strlen(str3));
	printf("Tamanho real: %d\n", total_size);
	printf("\n");
	printf("Funcao exercicio:\n");
	total_size = ft_strlcat(str4, str5, 5);
	printf("String concatenada: %s\n", str4);
	printf("Tamanho final: %d\n", ft_strlen(str4));
	printf("Tamanho real: %d\n", total_size);
	printf("\n");
	printf("Funcao original:\n");
	total_size = strlcat(str6, str7, 5);
	printf("String concatenada: %s\n", str6);
	printf("Tamanho final: %d\n", ft_strlen(str6));
	printf("Tamanho real: %d\n", total_size);
	printf("\n");
	printf("Funcao exercicio:\n");
	total_size = ft_strlcat(str6, str7, 5);
	printf("String concatenada: %s\n", str6);
	printf("Tamanho final: %d\n", ft_strlen(str6));
	printf("Tamanho real: %d\n", total_size);
	printf("\n");
	printf("Funcao original:\n");
	total_size = strlcat(str7, str5, 5);
	printf("String concatenada: %s\n", str7);
	printf("Tamanho final: %d\n", ft_strlen(str7));
	printf("Tamanho real: %d\n", total_size);
	printf("\n");
	printf("Funcao exercicio:\n");
	total_size = ft_strlcat(str8, str5, 5);
	printf("String concatenada: %s\n", str8);
	printf("Tamanho final: %d\n", ft_strlen(str8));
	printf("Tamanho real: %d\n", total_size);
	return (0);
}