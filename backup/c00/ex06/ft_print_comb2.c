/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:39:27 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/01 17:46:35 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_print_comb2(void)
{
	int a = '0';
	int b;
	int c;
	int d;
	
	while(a <= '9')
	{
		b = a;
		while(b <= '9')
		{
			c = b;
			while(c <= '9')
			{
				d = c;
				while(d <= '9')
				{
					write (1, &a, 1);
					write (1, &b, 1);
					write (1, " ", 1);
					write (1, &c, 1);
					write (1, &d, 1);
					if (a != '9')
					write (1, ", ", 2);
					d++;
				}				
				c++;
			}
			b++;
		}
		a++;
	}
}
