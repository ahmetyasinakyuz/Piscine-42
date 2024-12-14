/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakyuz <aakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 02:10:19 by aakyuz            #+#    #+#             */
/*   Updated: 2024/07/10 02:48:05 by aakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	a;

	a = 0;
	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		a = nb % i;
		if (a == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	a;

	a = 0;
	i = 0;
	if (nb <= 2)
	{
		return (2);
	}
	while (nb > 2)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}
