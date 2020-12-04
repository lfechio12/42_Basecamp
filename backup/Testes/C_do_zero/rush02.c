/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 20:05:00 by lantonio          #+#    #+#             */
/*   Updated: 2020/11/23 09:51:01 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
//x quantidade de colunas e y quantidade de linhas 5 e 3
//x coluna e y linha
{
	int i;	// linha y
	int j; // coluna x
	
	// x e J coluna
	// y e i linhas
	if(x != 0)
	{
		i = 1;
		while(i <= y) //1 == 3 - FALSO
		{
			j = 1;
			while(j <= x) // 1 <= 5 VERDADEIRO
			{									
				if(i == 1 && (j == 1 || j == x)) //1 == 1 && (1 == 1 || 1 == 5) - Verdadeiro && (VERDADEIRO || FALSO) - verdadeIRO && verdadeiro - verdadeiro
					ft_putchar('A');
				else if(i == y && (j == 1 || j == x) ) // 1 == 3 && (1 == 1 || 1 == 5) - falso && (verdadeiro || falso) - falso && verdadeiro - falso
					ft_putchar('C');
				else if (j > 1 && j < x && i > 1 && i < y) // 1 > 1 && 1 < 5 && 1 > 1 && 1 < 3 - falso && verdadeiro && falso && verdadeiro - falso
					ft_putchar(' ');
				else
					ft_putchar('B'); //esse else só irá funcionar se os demais acima forem falsos
				j++;
			}		
			ft_putchar('\n');// pula uma linha
			i++;
		}
	}
}
