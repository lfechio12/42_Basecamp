/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfurlan- <lfurlan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:22:58 by lfurlan-          #+#    #+#             */
/*   Updated: 2020/12/02 15:16:17 by lfurlan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int dest_size;

	dest_size = ft_strlen(dest);
	i = 0;
	while (dest[i] != '\0')
		i++;
	if (dest_size == 0)
		size = size - 1;
	else if (size < dest_size - 1)
		dest_size = size;
	j = 0;
	while (j < (size - dest_size) && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_size + ft_strlen(src));
}
