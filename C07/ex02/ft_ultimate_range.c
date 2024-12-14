/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:45:25 by aakyuz            #+#    #+#             */
/*   Updated: 2024/07/16 13:20:59 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		index;
	int		*d;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = max - min;
	d = (int *)malloc((i) * sizeof(int));
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	index = 0;
	while (index < i)
	{
		d[index] = min + index;
		index++;
	}
	*range = d;
	return (i);
}
