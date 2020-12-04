/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_09.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:10:46 by lantonio          #+#    #+#             */
/*   Updated: 2020/12/02 16:26:59 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str);

int        main(void)
{
    char str[] = {"CT`sf!KF{V;X2}#K&1oJ3(FmXKt,YV*W@!O $"};
    char *prt;

    prt = ft_strcapitalize(str);
    printf("%s\n", str);
    printf("%s\n", prt);
    return (0);
}
