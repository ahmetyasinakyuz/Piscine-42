/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:16:31 by aakyuz            #+#    #+#             */
/*   Updated: 2024/07/08 13:13:12 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		a = 0;
		while (str[i + a] == to_find[a] && str[i])
		{
			if (to_find[a + 1] == '\0')
			{
				return (&str[i]);
			}
			a++;
		}
		i++;
	}
	return (0);
}
