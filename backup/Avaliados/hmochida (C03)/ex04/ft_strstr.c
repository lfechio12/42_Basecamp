/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:50:00 by hmochida          #+#    #+#             */
/*   Updated: 2020/12/02 19:05:12 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int		ft_strlen(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int strlen;
	int *ptr;
	int i;
	i = 0;

	strlen = ft_strlen(to_find);
	while(str[i] != '\0' && i <= strlen)
	{
		if (str[i] = to_find[0])
		{
			while(to_find[i] != '\0' && i <= strlen)
			{
				if (str[i] == to_find[i])
				{
					*ptr = to_find[i - strlen];
				}
			}
		}
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
*/
