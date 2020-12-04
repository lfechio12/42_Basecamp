/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 12:14:13 by rpaulino          #+#    #+#             */
/*   Updated: 2020/12/02 16:11:03 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*retur;

	retur = str;
	i = 0;
	while (*str != '\0')
	{
		if ((*str >= '{' && *str <= '~') || (*str >= '[' && *str <= '`') ||
			(*str >= ':' && *str <= '@') || (*str >= '!' && *str <= '/'))
			i = 0;
		if (*str > '0' && *str < '9')
			i++;
		if ((*str >= 'a' && *str <= 'z') && i == 0)
		{
			*str -= 32;
			i++;
		}
		else if (((*str >= 'A' && *str <= 'Z') && i != 0))
			*str += 32;
		else if (((*str >= 'A' && *str <= 'Z') && i == 0))
			i++;
		str++;
	}
	return (retur);
}

#include <stdio.h>

int        main(void)
{
    char str[] = {"CT`sf!KF{V;X2}#K&1oJ3(FmXKt,YV*W@!O $"};
    char *prt;

    prt = ft_strcapitalize(str);
    printf("%s\n", str);
    printf("%s\n", prt);
    return (0);
}