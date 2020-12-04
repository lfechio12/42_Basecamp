/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfurlan- <lfurlan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 04:05:35 by lfurlan-          #+#    #+#             */
/*   Updated: 2020/12/02 11:54:38 by lfurlan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		cmp(char *str, char *to_find)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0' && to_find[i] != '\0')
	{
		if (str[i] != to_find[i])
			return (0);
		i++;
	}
	if (to_find[i] == '\0')
		return (1);
	else
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find && cmp(str, to_find) == 1)
			return (str);
		str++;
	}
	return (0);
}
