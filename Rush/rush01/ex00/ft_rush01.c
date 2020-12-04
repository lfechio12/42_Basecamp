/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnedina- <vnedina-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 19:04:09 by vnedina-          #+#    #+#             */
/*   Updated: 2020/11/28 21:45:05 by vnedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		rush(void)
{
	int row;
	int col;
	
	int i;
	int j;
	
	
	//guardando valor da entrada informada (??????)
	col_u = [0], [1], [2], [3]; //4321
	row_r = [12], [13], [14], [15]; //4321
	row_l = [8], [9], [10], [11]; //1222
	col_d = [4], [5], [6], [7]; //1222

	//declara matriz vazia para aguardar dados de entrada
	int matriz[4][4] = 
	{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}
	};
	
	//loop para inserir dados na matriz
	i = 1;
	while(i <= 3)
	{	j = 1;
		if(col_u[i] == 4 && row_l[i] == 4)
		{	
			printf("Valor coluna cima[i] %d\n", col_u[i]);
			while(j <= 3)
			{
				matriz[i][j] = j + 1;  
				matriz[j][i] = j + 1;  
			}
			else if(col_u[i] == 3 && row_l[i] == 3)
			{
				while(j <= 3)
				{
					matriz[i][j] = j + 1;  
					matriz[j][i] = j + 1;  
					
				}
			}
			else if(col_u[i] == 2 && row_l[i] == 2)
			{
				while(...)
			}
		}
		else { //coluna up = 1 && row left = 1
			matriz[i][j] = 3;
		}
		i++;	
	}

}
