/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 01:42:36 by aakyuz            #+#    #+#             */
/*   Updated: 2024/07/10 02:46:56 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	a;

	a = 0;
	i = 0;
	while (i <= nb)
	{
		a = i * i;
		if (a == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
