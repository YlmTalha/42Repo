/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyilmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:01:59 by tyilmaz           #+#    #+#             */
/*   Updated: 2025/04/26 16:25:44 by tyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	value;

	value = 1;
	i = 0;
	if (power < 0)
		return (0);
	while (i < power)
	{
		value *= nb;
		i++;
	}
	return (value);
}
