/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 12:25:31 by rpaulino          #+#    #+#             */
/*   Updated: 2020/12/02 16:12:33 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size - 1)
	{
		*dest = *src;
		i++;
		dest++;
		src++;
	}
	*dest = '\0';
	return (0);
}

#include <stdio.h>
#include <bsd/string.h>
int main(void)
{
    char a[] = "hello";
    char b[] = "bye";
    char *src = a;
    char *dest = b;
    ft_strlcpy(dest, src, 3);
    printf("%s", a);
    printf("%s", b);
    return 0;
}