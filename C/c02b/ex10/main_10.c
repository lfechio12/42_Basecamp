/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_10.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:14:12 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/02 16:36:33 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

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
