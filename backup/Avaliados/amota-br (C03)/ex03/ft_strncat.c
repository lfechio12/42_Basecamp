/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amota-br <amota-br@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:54:59 by amota-br          #+#    #+#             */
/*   Updated: 2020/12/02 19:23:10 by amota-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int count;
	unsigned int c_src;

	count = 0;
	c_src = 0;
	if (nb == 0)
		return (dest);
	while (dest[count] != '\0')
		count++;
	while (src[c_src] != '\0' && c_src < nb)
	{
		dest[count + c_src] = src[c_src];
		c_src++;
	}
	dest[count + c_src] = '\0';
	return (dest);
}
