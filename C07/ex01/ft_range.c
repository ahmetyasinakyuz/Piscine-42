/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:58:23 by aakyuz            #+#    #+#             */
/*   Updated: 2024/07/16 13:21:12 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	range;
	int	i;
	int	j;

	j = 0;
	i = min;
	if (min >= max)
	{
		return (0);
	}
	range = max - min;
	a = (int *)malloc((range) * sizeof(int));
	while (i < max)
	{
		a[j] = i;
		i++;
		j++;
	}
	return (a);
}
