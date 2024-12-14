/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:28:31 by aakyuz            #+#    #+#             */
/*   Updated: 2024/07/03 17:04:01 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	n[6];

	n[0] = 0;
	while (n[0] <= 98)
	{
		n[1] = n[0] + 1;
		while (n[1] <= 99)
		{
			n[2] = n[0] / 10 + 48;
			write(1, &n[2], 1);
			n[3] = n[0] % 10 + 48;
			write(1, &n[3], 1);
			write(1, " ", 1);
			n[4] = n[1] / 10 + 48;
			write(1, &n[4], 1);
			n[5] = n[1] % 10 + 48;
			write(1, &n[5], 1);
			if (n[0] != 98 || n[1] != 99)
			{
				write(1, ", ", 2);
			}
			n[1]++;
		}
		n[0]++;
	}
}
